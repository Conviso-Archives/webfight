#!/usr/bin/env python
# -*- coding: utf-8 -*-

from core import report
from conf import utils
import time

def analysis(http_objs):
    """
    Requests analysis

    @param log_parser: Objects parsed at Burp Log File.
    """
    
    rpt = report.htmltags()
    hash = utils.md5_object
    hash_group = []

    requests = http_objs["total_requests"]
    request_methods = http_objs["request_methods"]
    request_URLs = http_objs["request_URL"]
    status = http_objs["response_status"]
    request_body = http_objs["request_body"]
    
    csrf_rows = []
    params_form = []

    header_poc = "<html><title>CSRF PoC</title><body>"
    footer_poc = "'</form> <script>document.forms[0].submit()</script></body></html>"

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
                if request_methods[i] == "GET" and query != "":
                    body_poc = "<form method='GET' action='" + protocol + "://" + url + path + "?" + query + "'"
                    content = header_poc + body_poc + footer_poc
                    content_source = header_poc + utils.html_escape(body_poc + "</form> <script>document.forms[0].submit()</script>") + "</body></html>" 
                    rpt.make_module_report_file(content, str(i) + "CSRF_POC")
                    rpt.make_module_report_file(content_source, str(i) + "CSRF_SOURCE_POC")
                    csrf_rows.append("<td>" + rpt.href(full_path) + "</td><td>" + rpt.href(str(i) + "CSRF_POC") + "</td><td>" + rpt.href(str(i) + "CSRF_SOURCE_POC") + "</td><td>" + request_methods[i] + "</td>")

                elif request_methods[i] == "POST" and request_body[i] != "":
                    params_split = request_body[i].split("&")
                    for x in params_split:
                        param = x.split("=")
                        params_form.append("<input type='text' name='" + str(param[0]) + "' value='" + str(i) + "' />")
                    
                    input_form = ""
                    for param in params_form:
                        input_form = input_form + param
                    
                    body_poc = "<form method='POST' action='" + protocol + "://" + url + path + "'"
                    body_poc = body_poc + input_form
                    content = header_poc + body_poc + footer_poc
                    content_source = header_poc + utils.html_escape(body_poc + "</form> <script>document.forms[0].submit()</script>") + "</body></html>" 
                    rpt.make_module_report_file(content, str(i) + "CSRF_POC")
                    rpt.make_module_report_file(content_source, str(i) + "CSRF_SOURCE_POC")
                    csrf_rows.append("<td>" + rpt.href(full_path) + "</td><td>" + request_methods[i] + "</td><td>" + rpt.href(str(i) + "CSRF_SOURCE_POC") + "</td><td>" + rpt.href(str(i) + "CSRF_POC") + "</td>")
                
    collums = {"CSRF":["Path", "Method", "PoC", "Source PoC"]}
    rows = {"CSRF":csrf_rows}

    tip = "Tip: <a href='https://www.owasp.org/index.php/Cross-Site_Request_Forgery_(CSRF)_Prevention_Cheat_Sheet' target='_blank'>Cross-Site Request Forgery (CSRF) Prevention Cheat Sheet</a> and <a href='https://www.owasp.org/index.php/Testing_for_CSRF_%28OWASP-SM-005%29' target='_blank'>Testing for CSRF</a>"

    rpt.make_table("csrf", tip, collums, rows)    
    


 
     
     

