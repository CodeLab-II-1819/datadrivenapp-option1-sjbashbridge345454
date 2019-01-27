#include "ofApp.h"

void ofApp::setup() {

	//Sets 'width' and 'height' to width and height of window, allowing for scalability
	width = ofGetWindowWidth();
	height = ofGetWindowHeight();

	//Sets rgb value of 'colourA'
	colourA.set(55, 125, 255);

	optionTXT.load("NixieOne.ttf", textHeight / 2);
	outputTXT.load("NixieOne.ttf", textHeight / 1.5);

	//Sets values of strings for welcome message
	welcome = "S a m p l e   T w e e t   D a t a b a s e";
	welcome2 = "A n   A s h b r i d g e   I n d u s t r i e s   P r o d u c t";
	option = "Count All Tweets";
	option2 = "About: politics";
	option3 = "About: Japan";
	option4 = "Mention: 'Money'";
	option5 = "Mention: 'Uber'";
	option6 = "Mention: 'Paris'";
	option7 = "Mention: 'DreamWorks'";
	option8 = "Published: 00:00";
	option9 = "Published: 12:00";
	option10 = "Published: April 2016";
	output = "Output:";

	//Sets 'pad' to a fraction of the window height, making it scalable
	pad = ofGetWindowHeight() / 55;
	textHeight = ofGetWindowHeight() / 25;

}

void ofApp::update() {

	//Updates values of 'width', 'height' and 'pad' every frame to allow user to change size of window
	width = ofGetWindowWidth();
	height = ofGetWindowHeight();

	welcomeTXT.load("NixieOne.ttf", textHeight);
	optionTXT.load("NixieOne.ttf", textHeight/2);
	outputTXT.load("NixieOne.ttf", textHeight / 1.5);

	pad = ofGetWindowHeight() / 55;
	textHeight = ofGetWindowHeight() / 25;

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

	//Changes colour again, then draws an option box and welcome and output text
	ofSetColor(255);
	ofRect(pad * 2, (height / 8) + pad * 3, (width / 5) - pad * 2, (height / 16));

	welcomeTXT.drawString(welcome, pad * 2, textHeight + pad * 2);
	welcomeTXT.drawString(welcome2, pad * 2, textHeight * 2 + pad * 2.5);
	outputTXT.drawString(output, (width / 5) + (pad * 3), (height / 8) + (pad * 4.5));

	//Changes colour again, then draws two more option boxes
	ofSetColor(225, 225, 255);
	ofRect(pad * 2, (height / 8) + pad * 4 + (height / 16), (width / 5) - pad * 2, (height / 16));
	ofRect(pad * 2, (height / 8) + pad * 5 + ((height / 16) * 2), (width / 5) - pad * 2, (height / 16));

	//Changes colour again, then draws four more option boxes
	ofSetColor(225, 255, 225);
	ofRect(pad * 2, (height / 8) + pad * 6 + ((height / 16) * 3), (width / 5) - pad * 2, (height / 16));
	ofRect(pad * 2, (height / 8) + pad * 7 + ((height / 16) * 4), (width / 5) - pad * 2, (height / 16));
	ofRect(pad * 2, (height / 8) + pad * 8 + ((height / 16) * 5), (width / 5) - pad * 2, (height / 16));
	ofRect(pad * 2, (height / 8) + pad * 9 + ((height / 16) * 6), (width / 5) - pad * 2, (height / 16));

	//Changes colour again, then draws three more option boxes
	ofSetColor(255, 225, 225);
	ofRect(pad * 2, (height / 8) + pad * 10 + ((height / 16) * 7), (width / 5) - pad * 2, (height / 16));
	ofRect(pad * 2, (height / 8) + pad * 11 + ((height / 16) * 8), (width / 5) - pad * 2, (height / 16));
	ofRect(pad * 2, (height / 8) + pad * 12 + ((height / 16) * 9), (width / 5) - pad * 2, (height / 16));

	/*Because all four parameters (start x, start y, width and height) are determined based on window size,
	all boxes will scale together when resizing the window*/


	//Text will also rescale using this system. After the colour is changed, the ten option boxes are filled with text
	ofSetColor(28, 36, 137);

	optionTXT.drawString(option, pad * 2.5, (height / 8) + pad * 6);
	optionTXT.drawString(option2, pad * 2.5, (height / 8) + pad * 7 + (height / 16));
	optionTXT.drawString(option3, pad * 2.5, (height / 8) + pad * 8 + ((height / 16) * 2));
	optionTXT.drawString(option4, pad * 2.5, (height / 8) + pad * 9 + ((height / 16) * 3));
	optionTXT.drawString(option5, pad * 2.5, (height / 8) + pad * 10 + ((height / 16) * 4));
	optionTXT.drawString(option6, pad * 2.5, (height / 8) + pad * 11 + ((height / 16) * 5));
	optionTXT.drawString(option7, pad * 2.5, (height / 8) + pad * 12 + ((height / 16) * 6));
	optionTXT.drawString(option8, pad * 2.5, (height / 8) + pad * 13 + ((height / 16) * 7));
	optionTXT.drawString(option9, pad * 2.5, (height / 8) + pad * 14 + ((height / 16) * 8));
	optionTXT.drawString(option10, pad * 2.5, (height / 8) + pad * 15 + ((height / 16) * 9));


}
