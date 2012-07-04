#!/usr/bin/env python
# -*- coding: utf-8 -*-

from conf import utils
from lxml import etree as ET

class htmltags:
    """
    Put docstring here
    """

    def href(self, content):
        return "<a href='" + content + "' target='_blank'>""" + content + "</a>"

    def html_report(self):
        filename = utils.__workspace_path__ + "report.html"
        outfile = open(filename, "w")
        header = """<html><title>WebFight Log Analysis</title><head>"""
		
        read_style = open("conf/style/main_style.txt", "r")
        read_style = read_style.read()
        header = header + read_style
        
        body = "<div id='content'>"
        body = body + "<iframe src='http://code.google.com/p/webfight/' width='98%' height='600' scrolling='no' frameborder='0' name='main'> </iframe>"
        body = body + "</div>"

        footer = """</body></html>"""
        outfile.write(header + body + footer)
        outfile.close()

    def make_table(self, name, tip, collums, rows):

        filename = utils.__workspace_path__ + name
        outfile = open(filename + ".html", "w")
        
        header = """<html><title>WebFight Log Analysis</title><head>"""

        read_style = open("conf/style/datatable_style.txt", "r")
        read_style = read_style.read()
        body_content = ""
        header = header + read_style + "</head><body>"
        tabs = "<div id='tabs'><ul>"
        for tab_id in collums.keys():
            tabs = tabs + "<li><a href='#tabs-" + tab_id + "'>" + tab_id + "</a></li>"
        tabs = tabs + "</ul>"
        
        for table_id in collums.keys():
            header_table = "<div id='tabs-" + table_id +  "'><fieldset><legend>Summary</legend>" + tip +  "</fieldset><br><table cellpadding='2' cellspacing='2' border='0'"
            header_table = header_table + " class='display' id='" + table_id + "'>"
        
            collums_header = "<thead><tr>"
            for collum in collums[table_id]:
                collums_header = collums_header + "<th>" + collum + "</th>"
            collums_header = collums_header + "</thead></tr>"
                
            rows_header = "<tbody>"
            row_content = ""
            
            for row in rows[table_id]:
                row_content = row_content + "<tr>" + row + "</tr>"

            footer_table = "</tbody></table></div>"            
            body_content = body_content + header_table + collums_header + rows_header + row_content + footer_table        
        
        footer = "</div></body></html>"
        outfile.write(header + tabs + body_content + footer)
        outfile.close()
        
        
    def make_module_report_file(self, content, filename):
        filename = utils.__workspace_path__ + filename
        outfile = open(filename, "w")
        outfile.write(content)
        outfile.close()