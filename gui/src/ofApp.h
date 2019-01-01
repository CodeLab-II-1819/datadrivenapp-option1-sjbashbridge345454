#pragma once
#include "ofMain.h"
#include "ofApp.h"
#include <iostream>
#include <fstream>
#include <string>

class ofApp : public ofBaseApp{

	public:
		
		void setup();
		void update();
		void draw();

		int tweetCount = 0;
		
		string line;
		ifstream tweetList;

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
