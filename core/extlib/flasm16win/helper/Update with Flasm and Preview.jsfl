/*
Copyright (c) 2004-2005 Igor Kogan
See flasm.html for usage.
*/

// Set path to flasm.exe here
var flasmpath = "c:/Flasm/flasm.exe";

function URI(winpath){
	var temp = winpath.split("\\");
	for (var i=1; i<temp.length-1; i++)
		temp[i] = escape(temp[i]);
	return "file:///" + temp.join("/");
}

var doc = fl.getDocumentDOM();
if (doc == null)
	result = "No current document";
else {
	var swfname = doc.path;
	if (doc.path == undefined)
		result = "Please save document first";
	else {
		swfname = swfname.substr(0,swfname.lastIndexOf(".fla")) + ".swf";
		doc.save();
		doc.publish();
		var result = flasmhelper.update(flasmpath, swfname);
		fl.createDocument("timeline");
		var pdoc = fl.getDocumentDOM();
		pdoc.getTimeline().layers[0].frames[0].actionScript = "loadMovie('"+URI(swfname)+"',_root);";
		fl.saveDocument(pdoc,fl.configURI+"Commands/flasmpreview.fla");
		fl.setActiveWindow(doc);
		pdoc.testMovie();
		fl.closeDocument(pdoc,false);
	}
}
fl.trace(result);