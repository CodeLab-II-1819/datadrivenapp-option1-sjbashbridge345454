#pragma once

#include "ofMain.h"
#include "ofxJSON.h"
#include "ofxGui.h"
#include <sstream>
#include <string>

class ofApp : public ofBaseApp {

public:

	//Declares functions 'setup', 'update' and 'draw'
	void setup();
	void update();
	void draw();

	bool parseSuccess;

	//integers 'pad', 'width' and 'height', declared here, are determined by the window size
	int pad;
	int width;
	int height;

	//Declares two colours, 'colourA' and 'colourB'
	ofColor colourA, colourB;

	//Declares various new strings
	string welcome, welcome2, option;
	string options[10];

	//Declares new fonts
	ofTrueTypeFont welcomeTXT, optionTXT;

};
