#!/usr/bin/env python
# -*- coding: utf-8 -*-

from conf import utils
from core import report

rpt = report.htmltags()

def xml_analys(urls, requests, response_body, response_headers):

    url = urls
    xml_full_path = []
    xml_rows = []

    for i in xrange(0, requests):
        protocol = url[i]["protocol"]
        domain = url[i]["url"]
        path = url[i]["path"]
        params = url[i]["params"]
        query = url[i]["query"]

        full_path = protocol + "://" + domain + path

        if response_headers[i].has_key("Content-Type"):
            if "xml" in str(response_headers[i]["Content-Type"]) and full_path not in xml_full_path:
                xml_full_path.append(full_path)
                content = utils.syntaxhighlighter("xml", rpt.href(full_path), response_body[i])
                xml_rows.append("<td>" + rpt.href(full_path) + "</td><td>" + rpt.href(str(i) + "file") + "</td>")
                rpt.make_module_report_file(content, str(i) + "file")

    collums = {"XML":["Path", "XML Analyzed"]}
    rows = {"XML":xml_rows}

    tip = ""
    
    rpt.make_table("xml", tip, collums, rows)

def analysis(http_objs):

    requests = http_objs["total_requests"]
    response_body  = http_objs["response_body"]
    response_headers = http_objs["response_headers"]
    urls =  http_objs["request_URL"]

    xml_analys(urls, requests, response_body, response_headers)