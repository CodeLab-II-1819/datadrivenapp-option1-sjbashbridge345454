#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
	ofSetupOpenGL(1920,1080,OF_WINDOW);			// <-------- setup the GL context

	//With help from: https://subscription.packtpub.com/book/application_development/9781784396145/3/ch03lvl1sec24/implementing-the-autosave-feature
	ofRunApp(new ofApp());

}
