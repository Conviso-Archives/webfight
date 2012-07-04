#!/usr/bin/env python
# -*- coding: utf-8 -*-

from conf import utils
from core import report
import re

rpt = report.htmltags()

def grep_domobjects(http_objs, requests, response_data, dom_regex):

    request_URLs = http_objs["request_URL"]

    dom_rows = []

    hash_group = []
                    
    for i in xrange(0, requests):
        protocol = request_URLs[i]["protocol"]
        url = request_URLs[i]["url"]
        path = request_URLs[i]["path"]
        params = request_URLs[i]["params"]
        query = request_URLs[i]["query"]

        full_path = protocol + "://" + url + path
        
        content = re.findall(eval(dom_regex), response_data[i], re.I) 
        content = str(content)
        if content != "[]":
            if utils.md5_object(full_path + utils.html_escape(content)) not in hash_group:
                dom_rows.append("<td>" + rpt.href(full_path) + "</td><td>" + utils.html_escape(content) + "</td>")
            hash_group.append(utils.md5_object(full_path + utils.html_escape(content)))

    return dom_rows


def analysis(http_objs):

    requests = http_objs["total_requests"]
    response_body  = http_objs["response_body"]

    dom_objects_regex = {"comments":"""r'(<!--.*?-->)'""",
        "hiddenfields":"""r'(type=hidden.*?" />|type="hidden".*?" />)'""",
        "forms":"""r'(?s)<form.+?</form>'""",
        "iframe":"""r'(?s)<iframe.+?</iframe>'""",
        "passwordfields":"""r'(type=password.*?" />|type="password".*?" />)'""",
        "fileuploads":"""r'(<INPUT TYPE=FILE.*?">|<input type=file.*?">|<input type="file".*?" />)'""",
        "applets":"""r'(?s)<applet.+?</applet>'""",
        "objects":"""r'(?s)<object.+?</object>'""",
        "embeds":"""r'(?s)<embed.+?>'""",
        "FIXME-TODO":"""r'(#fixme|#todo)'"""}

    rows_tables = []
    for i in dom_objects_regex.keys():
        rows_tables.append(grep_domobjects(http_objs, requests, response_body, dom_objects_regex[i]))

    collums = {"Comments":["Path", "Comments in HTML"], "HiddenFields":["Path", "Hidden Fields"],
    "Forms":["Path", "Forms"], "Iframe":["Path", "Iframes"], "PasswordFields":["Path", "Password Fields"],
    "FileUploads":["Path", "File Uploads"], "Applets":["Path", "Applets"], "Objects":["Path", "Objects"],
    "Embeds":["Path", "Embeds"], "FixmeTodo":["Path", "FIXME | TODO"]}
    
    rows = {"Comments":rows_tables[9], "HiddenFields":rows_tables[5], "Forms":rows_tables[0],
    "Iframe":rows_tables[4], "PasswordFields":rows_tables[3], "FileUploads":rows_tables[2],
    "Applets":rows_tables[6], "Objects":rows_tables[1], "Embeds":rows_tables[8], "FixmeTodo":rows_tables[7]}

    tip = ""

    rpt.make_table("dom", tip, collums, rows)    
