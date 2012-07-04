#!/usr/bin/env python
# -*- coding: utf-8 -*-

from core import report

def analysis(http_objs):
    """
    Put docstring here
    """
    
    rpt = report.htmltags()

    requests = http_objs["total_requests"]
    request_methods = http_objs["request_methods"]
    request_URLs = http_objs["request_URL"]
    status = http_objs["response_status"]
    request_body = http_objs["request_body"]
    response_headers = http_objs["response_headers"]
    
    get_rows = []
    post_rows = []
    redirect_rows = []
    error_rows = []
    files_rows = []
    escope_rows = []
    
    for i in xrange(0, requests):
        protocol = request_URLs[i]["protocol"]
        url = request_URLs[i]["url"]
        path = request_URLs[i]["path"]
        params = request_URLs[i]["params"]
        query = request_URLs[i]["query"]
        out_escope = request_URLs[i]["out_escope"]
        full_path = protocol + "://" + url + path

        if out_escope is False:
            if status[i] != 0 and status[i] < 300:
                if request_methods[i] == "GET":
                    get_rows.append("<td>" + rpt.href(full_path) + "</td><td>" + query + "</td><td>" + str(status[i]) + "</td>")
                elif request_methods[i] == "POST":
                    post_rows.append("<td>" + rpt.href(full_path) + "</td><td>" + request_body[i] + "</td><td>" + str(status[i]) + "</td>")

            elif status[i] >= 300 and status[i] <= 400:
                if response_headers[i].has_key("Location") is True:
                    redirect_rows.append("<td>" + rpt.href(full_path) + "</td><td>" + response_headers[i]["Location"] + "</td><td>" + str(status[i]) + "</td>")
                else:
                    redirect_rows.append("<td>" + rpt.href(full_path) + "</td>" + "<td>-</td>" + "<td>" + str(status[i]) + "</td>")
                        
            elif status[i] >= 401:            
                error_rows.append("<td>" + rpt.href(full_path) + "</td><td>" + str(status[i]) + "</td>")

            elif status[i] == 0:          
                files_rows.append("<td>" + rpt.href(full_path) + "</td><td>" + str(status[i]) + "</td>")

        else:
            escope_rows.append("<td>" + rpt.href(full_path) + "</td><td>" + str(status[i]) + "</td>")

    collums = {"GET":["Path", "Query", "Status Code"], "POST":["Path", "Param", "Status Code"],
    "Redirect":["Path", "Location", "Status Code"], "Error":["Path", "Status Code"],
    "Files":["Path", "Status Code"], "Escope":["Path", "Status Code"]}
    rows = {"GET":get_rows, "POST":post_rows, "Redirect":redirect_rows, "Error":error_rows,
    "Files":files_rows, "Escope":escope_rows}
    
    tip = ""
    
    rpt.make_table("main", tip, collums, rows)