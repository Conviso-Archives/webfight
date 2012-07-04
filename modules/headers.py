#!/usr/bin/env python
# -*- coding: utf-8 -*-

from core import report

def analysis(http_objs):

    requests = http_objs["total_requests"]
    response_headers = http_objs["response_headers"]
    request_URLs =  http_objs["request_URL"]

    clickjacking_rows = []
    hsts_rows = []
    csp_rows = []
    csp_report_rows = []
    accesscontrol_rows = []
    xss_protection_rows = []

    rpt = report.htmltags()

    for i in xrange(0, requests):
        protocol = request_URLs[i]["protocol"]
        url = request_URLs[i]["url"]
        path = request_URLs[i]["path"]
        params = request_URLs[i]["params"]
        query = request_URLs[i]["query"]
        
        full_path = protocol + "://" + url + path

        if response_headers[i].has_key("X-Frame-Options"):
            clickjacking_rows.append("<td>" + rpt.href(full_path) + "</td><td>" + response_headers[i]["X-Frame-Options"] + "</td>")
        if response_headers[i].has_key("Strict-Transport-Security"):
            hsts_rows.append("<td>" + rpt.href(full_path) + "</td><td>" + response_headers[i]["Strict-Transport-Security"] + "</td>")
        if response_headers[i].has_key("X-Content-Security-Policy"):
            csp_rows.append("<td>" + rpt.href(full_path) + "</td><td>" + response_headers[i]["X-Content-Security-Policy"] + "</td>")
        if response_headers[i].has_key("X-Content-Security-Policy-Report-Only"):
            csp_report_rows.append("<td>" + rpt.href(full_path) + "</td><td>" + response_headers[i]["X-Content-Security-Policy-Report-Only"] + "</td>")
        if response_headers[i].has_key("Access-Control-Allow-Origin"):
            accesscontrol_rows.append("<td>" + rpt.href(full_path) + "</td><td>" + response_headers[i]["Access-Control-Allow-Origin"] + "</td>")
        if response_headers[i].has_key("X-XSS-Protection"):
            xss_protection_rows.append("<td>" + rpt.href(full_path) + "</td><td>" + response_headers[i]["X-XSS-Protection"] + "</td>")

    collums = {"HeadersSecurity":["Path", "Diretive"], "HSTS":["Path", "Diretive"], "CSP":["Path", "Diretive"], "CSP_Report":["Path", "Diretive"], "AccessControl":["Path", "Diretive"], "XSS_Protection":["Path", "Diretive"]}
    rows = {"HeadersSecurity":clickjacking_rows, "HSTS":hsts_rows, "CSP":csp_rows, "CSP_Report":csp_report_rows, "AccessControl":accesscontrol_rows, "XSS_Protection":xss_protection_rows}

    tip = "Tip: <a href='http://www.mcafee.com/us/resources/white-papers/foundstone/wp-recent-advances-web-app-security.pdf' target='_blank'>Recent Advances in Web Application Security</a>"
    
    rpt.make_table("headers", tip, collums, rows)