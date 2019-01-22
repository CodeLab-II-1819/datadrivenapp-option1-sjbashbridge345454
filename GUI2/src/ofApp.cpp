#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
	width = ofGetWindowWidth();
	height = ofGetWindowHeight();

	welcomeTXT.load("NixieOne.ttf", 18);

	colourA.set(55, 125, 255);

	welcome = "Sample Tweet Database";
	welcome2 = "An Ashbridge Industries Product";

	pad = ofGetWindowHeight()/55;

}

//--------------------------------------------------------------
void ofApp::update(){
	width = ofGetWindowWidth();
	height = ofGetWindowHeight();

	pad = ofGetWindowHeight() / 55;
}

//--------------------------------------------------------------
void ofApp::draw(){

	ofSetBackgroundColor(255);
	ofSetColor(28, 36, 137);
	ofRect(pad, pad, (width -(pad*2)), (height/8));
	ofRect(pad, (height / 8)+(pad*2),(width/5), ((height/8)*7)-(pad*3));
	ofSetColor(128, 136, 237);
	ofRect((width/5)+(pad*2), (height / 8) + (pad*2),((width/5)*4)-(pad*3), ((height / 8) * 7) - (pad*3));

	ofSetColor(255);
	ofRect(pad*2, (height / 8) + pad*3, (width / 5)-pad*2, (height / 16));
	ofRect(pad*2, (height / 8) + pad * 4 + (height / 16), (width / 5)-pad*2, (height / 16));
	ofRect(pad*2, (height / 8) + pad * 5 + ((height / 16)*2), (width / 5) -pad*2, (height / 16));
	ofRect(pad*2, (height / 8) + pad * 6 + ((height / 16) * 3), (width / 5) -pad*2, (height / 16));
	ofRect(pad*2, (height / 8) + pad * 7 + ((height / 16) * 4), (width / 5) -pad*2, (height / 16));
	ofRect(pad*2, (height / 8) + pad * 8 + ((height / 16) * 5), (width / 5) -pad*2, (height / 16));
	ofRect(pad*2, (height / 8) + pad * 9 + ((height / 16) * 6), (width / 5) -pad*2, (height / 16));
	ofRect(pad*2, (height / 8) + pad * 10 + ((height / 16) * 7), (width / 5) -pad*2, (height / 16));
	ofRect(pad*2, (height / 8) + pad * 11 + ((height / 16) * 8), (width / 5) -pad*2, (height / 16));
	ofRect(pad*2, (height / 8) + pad * 12 + ((height / 16) * 9), (width / 5) -pad*2, (height / 16));
	
	welcomeTXT.drawString(welcome, pad*2, 90 - welcomeTXT.stringHeight(welcome));
	welcomeTXT.drawString(welcome2, pad*2, 120 - welcomeTXT.stringHeight(welcome2));


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}
 
//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
