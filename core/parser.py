#!/usr/bin/env python
# -*- coding: utf-8 -*-

from core.extlib.gds.pub import burp
from conf import utils
import re

class headers_pool:
    """
    Put docstring here
    """
    def __init__(self, log_file):

        log_parser = burp.parse(log_file)

        request_URL = []
        request_methods = []
        request_headers = []
        request_body = []
        response_headers = []
        response_body = []
        response_status = []
        response_reasons = []
        
        out_scope_request = False
        
        while log_parser:
            Requests = log_parser.pop()
            
            request = Requests.url.scheme + "://" + Requests.url.netloc + Requests.get_request_path()
                
            if re.search(utils.__url_filter__, request, re.I) is None:
                out_scope_request = True
            request_URL.append({"protocol":Requests.url.scheme,
            "url":Requests.url.netloc,
            "path":Requests.url.path,
            "params":Requests.url.params,
            "query":Requests.url.query,
            "fragment":Requests.url.fragment,
            "out_escope":out_scope_request})
            request_methods.append(Requests.get_request_method())
            request_headers.append(Requests.get_request_headers())
            request_body.append(Requests.get_request_body())
            response_headers.append(Requests.get_response_headers())
            response_body.append(Requests.get_response_body())
            response_status.append(Requests.get_response_status())
            response_reasons.append(Requests.get_response_reason())
            
            out_scope_request = False

        total_requests = len(request_URL)
        http_objs = {"total_requests":total_requests,
        "request_URL":request_URL,
        "request_methods":request_methods,
        "request_headers":request_headers,
        "request_body":request_body,
        "response_headers":response_headers,
        "response_body":response_body,
        "response_status":response_status,
        "response_reasons":response_reasons}

        self.http = http_objs
        
        
    def get_http_objs(self):
        """
        Put docstring here
        """
        return self.http