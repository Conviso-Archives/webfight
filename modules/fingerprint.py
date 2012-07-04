#!/usr/bin/env python
# -*- coding: utf-8 -*-

from conf import utils
from core import report


def analysis(http_objs):
    requests = http_objs["total_requests"]
    response_headers = http_objs["response_headers"]
    request_headers = http_objs["request_headers"]
    
    headers = {"Server":"Application Server",
    "X-Powered-By":"Platform",
    "X-Aspnet-Version":"Asp.Net Version",
    "X-Varnish":"Varnish Cache"}
    
    fingerprint_rows = []
    servers = []
    
    hash_group = []
    rpt = report.htmltags()
    
    for i in xrange(0, requests):
        for header in response_headers[i].iterkeys():
            if header in headers.iterkeys():
                if utils.md5_object(str(request_headers[i]["Host"]) + str(headers[header])) not in hash_group:
                    servers.append(rpt.href(request_headers[i]["Host"]))
                    if response_headers[i].has_key("Server"):                    
                        fingerprint_rows.append("<td>" + request_headers[i]["Host"] + "</td><td>" + str(response_headers[i]["Server"]) + "</td>")
                    else:
                        fingerprint_rows.append("<td>" + request_headers[i]["Host"] + "</td><td>" + str(header) + "</td>")
                        
                    hash_group.append(utils.md5_object(str(request_headers[i]["Host"]) +  str(headers[header])))
                    

    collums = {"Fingerprint":["Path", "-"]}
    rows = {"Fingerprint":fingerprint_rows}

    tip = "Tip: <a href='https://www.owasp.org/index.php/Testing_for_Web_Application_Fingerprint_%28OWASP-IG-004%29' target='_blank'>Testing for Web Application Fingerprint</a>"

    rpt.make_table("fingerprint", tip, collums, rows)