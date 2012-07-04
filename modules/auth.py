#!/usr/bin/env python
# -*- coding: utf-8 -*-

from core import report

def analysis(http_objs):

    requests = http_objs["total_requests"]
    request_headers = http_objs["request_headers"]
    response_headers = http_objs["response_headers"]
    request_URLs =  http_objs["request_URL"]

    auth_rows = []
    authenticate_types_rows = []

    rpt = report.htmltags()

    for i in xrange(0, requests):
        protocol = request_URLs[i]["protocol"]
        url = request_URLs[i]["url"]
        path = request_URLs[i]["path"]
        params = request_URLs[i]["params"]
        query = request_URLs[i]["query"]
        
        full_path = protocol + "://" + url + path

        if request_headers[i].has_key("Authorization"):
            auth_rows.append("<td>" + rpt.href(full_path) + "</td><td>" + request_headers[i]["Authorization"] + "</td>")
        if response_headers[i].has_key("WWW-Authenticate"):
            authenticate_types_rows.append("<td>" + rpt.href(full_path) + "</td><td>" + response_headers[i]["WWW-Authenticate"] + "</td>")
    
    collums = {"Authorization":["Path", "Authorization Analyzed"], "Authenticate":["Path", "Authenticate Type Analyzed"]}
    rows = {"Authorization":auth_rows, "Authenticate": authenticate_types_rows}
    
    tip = "Tip: <a href='https://www.owasp.org/index.php/Testing_for_authentication' target='_blank'>Testing for authentication</a>"

    rpt.make_table("auth", tip, collums, rows)