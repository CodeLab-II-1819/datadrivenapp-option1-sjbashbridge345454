#include "ofMain.h"
#include "ofApp.h"

using namespace std;

//--------------------------------------------------------------
void ofApp::setup() {

	cout << "GUIDE:" << endl;
	cout << endl;
	cout << "Count all Tweets in the data set - 1" << endl;
	cout << "Count Tweets mentioning the word 'Money' - 2" << endl;
	cout << endl;
	cout << "Input: ";

}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

	switch (key) {
	case '1':

		cout << "Option 1 selected. Counting Tweets..." << endl;

		if (tweetList.good()) {

			while (!tweetList.eof()) {
				getline(tweetList, line);
				tweetCount++;
			}
		}
		break;

	case '2':

		int offset = 0;
		cout << "Option 2 selected. Counting Tweets..." << endl;

		if (tweetList.good()) {

			while (!tweetList.eof()) {
				while (getline(tweetList, line)) {
					if ((offset = line.find("money", 0)) != string::npos || (offset = line.find("Money", 0)) != string::npos) {
						tweetCount++;
					}
				}
			}
		}

		break;

		cout << endl;
		cout << "Counting Complete!" << endl;
		cout << "Tweets Found: ";
		cout << tweetCount << endl;
		cout << "Have a nice day!" << endl;
		cout << endl;

	}

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}