#!/usr/bin/env python
# -*- coding: utf-8 -*-

from conf import utils
from core import report, parser
import modules
import time

def import_modules():
    """
    Put docstring here
    """

    modules_dict = utils.parser_xml("conf/config.xml", "modules", "config")
    modules = []
    
    for module in modules_dict:
        modules.append("modules." + module["name"])

    map(__import__, modules)


def load_modules(log_file):
    """
    Put docstring here
    """
    total_spent = 0.0
    begin = time.time()
    requests = parser.headers_pool(log_file)
    http_objs = requests.get_http_objs()
    end = time.time()
    total_spent = end - begin
    utils.print_info("info", "Parser Done! | Seconds %.3f" % total_spent)

    import_modules()

    rpt = report.htmltags()

    modules_dict = utils.parser_xml("conf/config.xml", "modules", "config")

    while modules_dict:
        i = modules_dict.pop()
        
        begin = time.time()
        content = eval("modules." + i["name"] + ".analysis(http_objs)")
        end = time.time()
        spent = end - begin
        total_spent = total_spent + spent
        utils.print_info("info",
            "- \033[1;33m" + i["name"] + "\033[1;m Spent %.3f" % spent + "\033[1;m Seconds")
    
    rpt.html_report()
    utils.print_info("info", "Total Time spent: %.3f" % total_spent)