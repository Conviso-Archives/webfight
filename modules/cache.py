#!/usr/bin/env python
# -*- coding: utf-8 -*-

from core import report
from conf import utils

def analysis(http_objs):

    requests = http_objs["total_requests"]
    response_headers = http_objs["response_headers"]
    request_URLs = http_objs["request_URL"]

    headers = {"Cache-Control":"Cache-Control",
    "Pragma":"Pragma"}
    
    cache_rows = []
    hash_group = []

    rpt = report.htmltags()

    for i in xrange(0, requests):
        for header in response_headers[i].iterkeys():
            if header in headers.iterkeys():
                protocol = request_URLs[i]["protocol"]
                url = request_URLs[i]["url"]
                path = request_URLs[i]["path"]
                params = request_URLs[i]["params"]
                query = request_URLs[i]["query"]

                full_path = protocol + "://" + url + path

                if utils.md5_object(full_path + str(header)) not in hash_group:
                    cache_rows.append("<td>" + rpt.href(full_path) + "</td><td>" + str(response_headers[i][header]) + "</td>")
                
                hash_group.append(utils.md5_object(full_path + str(header)))

    collums = {"Cache":["Path", "Cache Analyzed"]}
    rows = {"Cache":cache_rows}
    
    tip = "Tip: <a href='https://www.owasp.org/index.php/Testing_for_Logout_and_Browser_Cache_Management_%28OWASP-AT-007%29' target='_blank'>Testing for Logout and Browser Cache Management</a>"

    rpt.make_table("cache", tip, collums, rows)
    rpt.html_report()