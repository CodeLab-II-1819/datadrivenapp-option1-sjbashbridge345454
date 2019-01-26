#include "ofApp.h"

void ofApp::setup() {

	//Sets 'width' and 'height' to width and height of window, allowing for scalability
	width = ofGetWindowWidth();
	height = ofGetWindowHeight();

	//Sets rgb value of 'colourA'
	colourA.set(55, 125, 255);

	//Sets values of strings for welcome message
	welcome = "Sample Tweet Database";
	welcome2 = "An Ashbridge Industries Product";

	//Sets 'pad' to a fraction of the window height, making it scalable
	pad = ofGetWindowHeight() / 55;

}

void ofApp::update() {

	//Updates values of 'width', 'height' and 'pad' every frame to allow user to change size of window
	width = ofGetWindowWidth();
	height = ofGetWindowHeight();

	pad = ofGetWindowHeight() / 55;
}

void ofApp::draw() {

	//Sets the background colour
	ofSetBackgroundColor(255);

	//Sets the main colour
	ofSetColor(28, 36, 137);

	//Draws two rectangles in this colour
	ofRect(pad, pad, (width - (pad * 2)), (height / 8));
	ofRect(pad, (height / 8) + (pad * 2), (width / 5), ((height / 8) * 7) - (pad * 3));

	//Changes colour, then draws third rectangle
	ofSetColor(128, 136, 237);
	ofRect((width / 5) + (pad * 2), (height / 8) + (pad * 2), ((width / 5) * 4) - (pad * 3), ((height / 8) * 7) - (pad * 3));

	//Changes colour again, then draws 10 more rectangles
	ofSetColor(255);
	ofRect(pad * 2, (height / 8) + pad * 3, (width / 5) - pad * 2, (height / 16));
	ofRect(pad * 2, (height / 8) + pad * 4 + (height / 16), (width / 5) - pad * 2, (height / 16));
	ofRect(pad * 2, (height / 8) + pad * 5 + ((height / 16) * 2), (width / 5) - pad * 2, (height / 16));
	ofRect(pad * 2, (height / 8) + pad * 6 + ((height / 16) * 3), (width / 5) - pad * 2, (height / 16));
	ofRect(pad * 2, (height / 8) + pad * 7 + ((height / 16) * 4), (width / 5) - pad * 2, (height / 16));
	ofRect(pad * 2, (height / 8) + pad * 8 + ((height / 16) * 5), (width / 5) - pad * 2, (height / 16));
	ofRect(pad * 2, (height / 8) + pad * 9 + ((height / 16) * 6), (width / 5) - pad * 2, (height / 16));
	ofRect(pad * 2, (height / 8) + pad * 10 + ((height / 16) * 7), (width / 5) - pad * 2, (height / 16));
	ofRect(pad * 2, (height / 8) + pad * 11 + ((height / 16) * 8), (width / 5) - pad * 2, (height / 16));

	/*Because all four parameters (start x, start y, width and height) are determined based on window size,
	all boxes will scale together when resizing the window*/
	ofRect(pad * 2, (height / 8) + pad * 12 + ((height / 16) * 9), (width / 5) - pad * 2, (height / 16));

	//Outputs the welcome message
	welcomeTXT.drawString(welcome, pad * 2, 90 - welcomeTXT.stringHeight(welcome));
	welcomeTXT.drawString(welcome2, pad * 2, 120 - welcomeTXT.stringHeight(welcome2));


}
