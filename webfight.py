#!/usr/bin/env python
# -*- coding: utf-8 -*-

__version__ = "1.0 Beta"
__authors__ = "Wagner Elias - welias@conviso.com.br"

from optparse import OptionParser
from core import dispatcher
from conf import utils

def main():
    """
    Parse burp log file using GDS Burp API

    GDS Burp Suite API by Marcin Wielgoszewski <marcinw@gdssecurity.com> at Gotham Digital Science

    Burp and Burp Suite are trademarks of PortSwigger Ltd. Copyright 2008 PortSwigger Ltd. All rights reserved.
    See http://portswigger.net for license terms.
    """

    log_file = options.logfile
    utils.__workspace_path__ = "workspaces/" + options.workspace + "/"
    
    utils.__url_filter__ = options.url
    
    utils.make_workspace()

    utils.print_info("info", "Parsing log file: " + "\033[1;33m" + log_file + "\033[1;m")

    dispatcher.load_modules(log_file)
    
    utils.print_info("info", "-- Output in: " + "\033[1;33m" + utils.__workspace_path__ + "reports/\033[1;m")


if __name__ == '__main__':
    """
    Put docstring here
    """
    opt = OptionParser()
    opt.add_option(
        '-i', '--input',
        dest='logfile',
        help='Define log file to analysis')
    opt.add_option(
        '-u', '--url',
        dest='url',
        help='Define URL to filter')
    opt.add_option(
        '-w', '--workspace',
        dest='workspace',
        help='Define folder name to put result analysis')

    (options, args) = opt.parse_args()
    
    main()
