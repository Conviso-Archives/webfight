#!/usr/bin/env python
# -*- coding: utf-8 -*-

from conf import utils
from core import report
from core.extlib import jsbeautifier
import re

rpt = report.htmltags()

jsbeautify = str(utils.parser_xml("conf/config.xml", "path", "js-beautify"))
jsbeautify = jsbeautify.strip("[]")

def get_script_body(urls, requests, request_headers, response_data):

    js_body_rows = []
    js_body_path = []
    js_comment_rows = []
    js_comment_path = []
    hash_group = []

    for i in xrange(0, requests):
        protocol = urls[i]["protocol"]
        domain = urls[i]["url"]
        path = urls[i]["path"]
        params = urls[i]["params"]
        query = urls[i]["query"]

        full_path = protocol + "://" + domain + path
        
        body_js = re.findall(r'(?s)<script.+?</script>', response_data[i])
        comment_js = re.findall(r'(?s)/\*.+?\*/', str(body_js))	
        
        for script in body_js:
            if utils.md5_object(full_path + script) not in hash_group:
               if full_path not in js_body_path:
                   content = jsbeautifier.js_beautify(script, "")
                   content = utils.syntaxhighlighter("js", rpt.href(full_path), utils.html_escape(content))
                   js_body_rows.append("<td>" + rpt.href(full_path) + "</td><td>" + rpt.href(str(i) + "body") + "</td>")
                   hash_group.append(utils.md5_object(full_path + script))
                   js_body_path.append(full_path)
               else:
                   content = jsbeautifier.js_beautify(script, "")
                   content = utils.syntaxhighlighter("js", rpt.href(full_path), utils.html_escape(content))
               rpt.make_module_report_file(content, str(i) + "body")

        for comment in comment_js:
            if utils.md5_object(full_path + comment) not in hash_group:
               if full_path not in js_comment_path:
                   content = utils.syntaxhighlighter("js", rpt.href(full_path), utils.html_escape(comment))
                   js_comment_rows.append("<td>" + rpt.href(full_path) + "</td><td>" + rpt.href(str(i) + "comment") + "</td>")
                   hash_group.append(utils.md5_object(full_path + comment))
                   js_comment_path.append(full_path)
               else:
                   content = utils.syntaxhighlighter("js", rpt.href(full_path), utils.html_escape(comment))
               rpt.make_module_report_file(content, str(i) + "comment")
               
    js_body = [js_body_rows, js_comment_rows]    
    return js_body

def js_analys(urls, requests, response_data, request_headers, response_headers):

    js_rows = []
    js_full_path = []

    for i in xrange(0, requests):
        protocol = urls[i]["protocol"]
        domain = urls[i]["url"]
        path = urls[i]["path"]
        params = urls[i]["params"]
        query = urls[i]["query"]

        full_path = protocol + "://" + domain + path
        
        if response_headers[i].has_key("Content-Type"):
            if "javascript" in str(response_headers[i]["Content-Type"]) and full_path not in js_full_path:
                source_warnings = utils.grep_statement("javascript_patterns", response_data[i], "source")
                sink_warnings = utils.grep_statement("javascript_patterns", response_data[i], "sink")
                content = jsbeautifier.js_beautify(response_data[i], "")
                content = utils.syntaxhighlighter("js", rpt.href(full_path), content)
                if request_headers[i].has_key("Referer") is True:
                    origin = rpt.href(request_headers[i]["Referer"])
                else:
                    origin = "No Referer Header"
                    
                js_rows.append("<td>" + rpt.href(full_path) + "</td><td>" + origin + "</td><td>" + rpt.href(str(i) + "file") + "</td><td>" + source_warnings + "</td><td>" + sink_warnings + "</td>")
                rpt.make_module_report_file(content, str(i) + "file")
                js_full_path.append(full_path)
    
    return js_rows

    
def analysis(http_objs):

    requests = http_objs["total_requests"]
    response_body  = http_objs["response_body"]
    request_headers = http_objs["request_headers"]
    response_headers = http_objs["response_headers"]
    urls =  http_objs["request_URL"]
    
    js_body_rows = get_script_body(urls, requests, request_headers, response_body)
    js_rows = js_analys(urls, requests, response_body, request_headers, response_headers)


    collums = {"Javascript":["Path", "Origin", "Js File Analyzed", "Source Warning", "Sink Warning"],
    "JavascriptBody":["Path", "Js Body Analyzed"], "JavascriptComments":["Path", "Js Comments"]}
    
    rows = {"Javascript":js_rows, "JavascriptBody":js_body_rows[0], "JavascriptComments":js_body_rows[1]}

    tip = "Tip: <a href='https://www.owasp.org/index.php/Testing_for_Cross_site_scripting' target='_blank'>Testing for Cross site scripting</a>"

    rpt.make_table("js", tip, collums, rows)