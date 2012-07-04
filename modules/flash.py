#!/usr/bin/env python
# -*- coding: utf-8 -*-

from commands import getoutput
from conf import utils
from core import report


def analysis(http_objs):

    requests = http_objs["total_requests"]
    response_body  = http_objs["response_body"]
    request_headers = http_objs["request_headers"]
    response_headers = http_objs["response_headers"]
    request_URLs =  http_objs["request_URL"]

    path_flasm = utils.parser_xml("conf/config.xml", "path", "flasm")
    path_report = utils.__workspace_path__

    swf_files = []
    flash_rows = []
    swf_paths = []

    rpt = report.htmltags()

    for i in xrange(0, requests):
        protocol = request_URLs[i]["protocol"]
        url = request_URLs[i]["url"]
        path = request_URLs[i]["path"]
        params = request_URLs[i]["params"]
        query = request_URLs[i]["query"]

        full_path = protocol + "://" + url + path

        if path.endswith(".swf"):
            split_url = full_path.split('/')
            file = len(split_url)
            getoutput('cd ' + path_report + ';' + utils.curl_conn() +
                ' ' + full_path + ';' + path_flasm[0] + '/./flasm -d ' +
                split_url[file - 1] + ' > ' + split_url[file - 1] + '.html')
            swf_files.append(split_url[file - 1] + '.html')
            swf_paths.append(rpt.href(full_path))

            if request_headers[i].has_key("Referer") is True:
                origin = rpt.href(request_headers[i]["Referer"])
            else:
                origin = "No Referer Header"
            
    for i in swf_files:
        readfile = open(path_report + i, "r")
        swf_content = readfile.read()

        content = ""
        text_warning = utils.grep_statement("flash_patterns", swf_content, "text")
        load_warning = utils.grep_statement("flash_patterns", swf_content, "load")
        net_warning = utils.grep_statement("flash_patterns", swf_content, "net")
        url_warning = utils.grep_statement("flash_patterns", swf_content, "url")
        crossdomain_warning = utils.grep_statement("flash_patterns", swf_content, "crossdomain")
        xml_warning = utils.grep_statement("flash_patterns", swf_content, "xml")
        lso_warning = utils.grep_statement("flash_patterns", swf_content, "lso")
        header_warning = utils.grep_statement("flash_patterns", swf_content, "header")
        externalinterface_warning = utils.grep_statement("flash_patterns", swf_content, "externalinterface")
        globalvariables_warning = utils.grep_statement("flash_patterns", swf_content, "globalvariables")
                    
        content = content + utils.syntaxhighlighter("as3", rpt.href(full_path), swf_content)
        rpt.make_module_report_file(content, str(i) + "ActionScript")
        flash_rows.append("<td>" + rpt.href(full_path) + "</td><td>" + origin + "</td><td>" + rpt.href(str(i) + "ActionScript") + "</td><td>" + text_warning + "</td><td>" + load_warning + "</td><td>" + net_warning + "</td>"  + "</td><td>" + url_warning + "</td><td>" + crossdomain_warning  + "</td><td>" + xml_warning  + "</td><td>" + lso_warning  + "</td><td>" + header_warning  + "</td><td>" + externalinterface_warning + "</td><td>" + globalvariables_warning +"</td>")

    collums = {"flash":["Path", "Origin", "Flash Analyzed", "Text Write", "Load", "Net Connections",
    "Url Parameter", "Cross Domain", "XML Send", "lSO", "Add Header", "External Interface", "Global Variables"]}
    rows = {"flash":flash_rows}

    tip = "Tip: <a href='https://www.owasp.org/index.php/Category:OWASP_Flash_Security_Project' target='_blank'>OWASP Flash Security Project</a> and <a href='https://www.owasp.org/index.php/Flash_Testing' target='_blank'>OWASP Testing Guide - Flash</a>"

    rpt.make_table("flash", tip, collums, rows)