#include "ofMain.h"
#include "ofApp.h"

int main() {
	//Sets up the default window size
	ofSetupOpenGL(1920, 1080, OF_WINDOW);

	//Starts the running of a new application
	ofRunApp(new ofApp());

}

