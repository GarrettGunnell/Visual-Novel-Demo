#include "ofApp.h"

void ofApp::setup() {
	ofSetVerticalSync(false);
	ofSetFrameRate(60);
	outside.load("Outside.png");
	inside.load("Inside.png");

	for (int i = 0; i < NUM_LEFT_DROPS; ++i) {
		leftRainDrops.push_back(new Rain(ofRandom(470, 805), 0, true));
	}
	for (int i = 0; i < NUM_RIGHT_DROPS; ++i) {
		rightRainDrops.push_back(new Rain(ofRandom(1095, 1390), 0, false));
	}
}

void ofApp::update() {
	for (int i = 0; i < leftRainDrops.size(); ++i) {
		leftRainDrops[i]->move();
	}
	for (int i = 0; i < rightRainDrops.size(); ++i) {
		rightRainDrops[i]->move();
	}
}

void ofApp::draw() {
	ofSetColor(255);
	outside.draw(0, 0);
	for (int i = 0; i < leftRainDrops.size(); ++i) {
		leftRainDrops[i]->draw();
	}
	for (int i = 0; i < rightRainDrops.size(); ++i) {
		rightRainDrops[i]->draw();
	}
	ofSetColor(255);
	inside.draw(0, 0);
	ofDrawBitmapString(ofToString(ofGetMouseX()) + ", " + ofToString(ofGetMouseY()), 100, 100);
}

void ofApp::keyPressed(int key) {

}

void ofApp::keyReleased(int key) {

}

void ofApp::mouseMoved(int x, int y) {

}

void ofApp::mouseDragged(int x, int y, int button) {

}

void ofApp::mousePressed(int x, int y, int button) {

}

void ofApp::mouseReleased(int x, int y, int button) {

}

void ofApp::mouseEntered(int x, int y) {

}

void ofApp::mouseExited(int x, int y) {

}

void ofApp::windowResized(int w, int h) {

}

void ofApp::gotMessage(ofMessage msg) {

}

void ofApp::dragEvent(ofDragInfo dragInfo) { 

}
