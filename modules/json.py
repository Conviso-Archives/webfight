#!/usr/bin/env python
# -*- coding: utf-8 -*-

from core import report

def analysis(http_objs):

    requests = http_objs["total_requests"]
    response_body  = http_objs["response_body"]
    response_headers = http_objs["response_headers"]
    request_URLs =  http_objs["request_URL"]

    json_rows = []

    rpt = report.htmltags()

    for i in xrange(0, requests):
        protocol = request_URLs[i]["protocol"]
        url = request_URLs[i]["url"]
        path = request_URLs[i]["path"]
        params = request_URLs[i]["params"]
        query = request_URLs[i]["query"]
        
        full_path = protocol + "://" + url + path

        if response_headers[i].has_key("Content-Type"):
            if "application/json" in str(response_headers[i]["Content-Type"]):
                json_rows.append("<td>" + rpt.href(full_path) + "</td><td>" + response_body[i] + "</td>")

    collums = {"JSON":["Path", "JSON Analyzed"]}
    rows = {"JSON":json_rows}

    tip = "Tip: <a href='https://www.owasp.org/index.php/Testing_for_AJAX_Vulnerabilities_%28OWASP-AJ-001%29' target='_blank'>Testing for AJAX Vulnerabilities</a> and <a href='http://haacked.com/archive/2009/06/25/json-hijacking.aspx' target='_blank'>JSON Hijacking</a>"
    
    rpt.make_table("json", tip, collums, rows)