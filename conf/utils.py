#!/usr/bin/env python
# -*- coding: utf-8 -*-

import lxml.etree as ET
from cStringIO import StringIO
from os import listdir, remove, removedirs, makedirs,  path
import hashlib

__workspace_path__ = ""
__url_filter__ = ""
__report_content__ = ""

def syntaxhighlighter(extension, path, content_data):

    js_syntax_file = ""
    path_style = parser_xml("conf/config.xml", "path", "syntaxhighlighter")

    if extension == "js":
        js_syntax_file = "shBrushJScript.js"
    elif extension == "xml":
        js_syntax_file = "shBrushXml.js"
    elif extension == "as3":
        js_syntax_file = "shBrushAS3.js"

    style = """<html><head><title>View</title>"""
    style = style + '<script type="text/javascript" src="' + path_style[0] + '/scripts/shCore.js"></script>'
    style = style + '<script type="text/javascript" src="' + path_style[0] + '/scripts/' + js_syntax_file + '"></script>'
    style = style + '<link type="text/css" rel="stylesheet" href="' + path_style[0] + '/styles/shCoreRDark.css"/>'
    style = style + '<script type="text/javascript">SyntaxHighlighter.all();</script></head>'

    content = ""
    content = content + "<p>" + path + """</p><pre class="brush: """ + extension + """;">"""
    content = content + content_data + "</pre></html>"

    return style + content


def md5_object(object):
    return hashlib.md5(object).hexdigest()


def check_hash(flag, object):
    if flag == "check":
        print "ok"
    else:
        __hash_group__ = object


def html_escape(text):
    text = text.replace('&', '&amp;')
    text = text.replace('"', '&quot;')
    text = text.replace("'", '&#39;')
    text = text.replace(">", '&gt;')
    text = text.replace("<", '&lt;')
    return text


def parser_xml(xml_file, tagfilter, element_value):
    f = open(xml_file)
    xml = f.read()
    f.close()

    xml_elements = []
    xml_result = []

    xml_parsed = ET.iterparse( StringIO (xml))
    for event, elem in xml_parsed:
        try:
            if elem.tag == tagfilter:
                xml_elements.append(elem.attrib)
        except:
            pass

    for i in xml_elements:
        try:
            if element_value == "":
                xml_result.append(i)
            elif element_value == "config":
                xml_result.append(i)
            else:
                xml_result.append(i[element_value])
        except:
            pass

    if element_value == "":
        list_elements = []
        for i in xml_result:
            try:
                list_elements.append(i["value"])
            except:
                pass
        xml_result = list_elements

    return xml_result


def grep_statement(obj_statements, content, item="item"):

    statements = []
    grep_return = []

    statements = parser_xml("conf/statements/" + obj_statements + ".xml", item, "")

    for item in statements:
        if item in content:
            grep_return.append(item)
        
    return str(grep_return)


def curl_conn():
    conf_proxy = parser_xml("conf/config.xml", "proxy", "config")

    if conf_proxy[0]["proxy"] == "False":
        curl_conn = "curl -C - -O "
    else:
        if conf_proxy[1]["auth"] == "False":
            curl_conn = "curl -C - -O --proxy " + conf_proxy[2]["address"]
        else:
            curl_conn = "curl -C - -O --proxy " + conf_proxy[3]["usr"] + ":" + conf_proxy[4]["psw"] + "@" + conf_proxy[2]["address"]

    print curl_conn
    return curl_conn


def make_workspace():

    if not path.exists(__workspace_path__):
        makedirs(__workspace_path__)
    else:
        files = listdir(__workspace_path__)
        for file in files:
            if not path.isdir(file):
                remove(__workspace_path__ + file)
    removedirs(__workspace_path__)

    #recria o workspace
    makedirs(__workspace_path__)

    
def print_info(status, message):

    if status == "info":
        print "[\033[1;33mINFO\033[1;m] - " + message
    elif status == "warning":
        print "[\033[1;34mWARNING\033[1;m] - " + message
    elif status == "error":
        print "[\033[1;31mERROR\033[1;m] - " + message
