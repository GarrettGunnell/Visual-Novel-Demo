#pragma once

#include "ofMain.h"
#include "Rain.h"
#include "DialogueBox.h"

class ofApp : public ofBaseApp{

	ofImage outside;
	ofImage inside;
	ofImage ardenBox;
	ofImage adrianBox;
	ofImage kaceyBox;
	ofImage ardencel1;
	ofImage ardencel2;
	ofImage ardencel3;
	ofImage ardencel4;

	DialogueBox* dialogueBox;

	ofSoundPlayer rainSound;

	vector<Rain*> leftRainDrops;
	vector<Rain*> rightRainDrops;
	vector<ofImage*> ardenBlink;

	const int NUM_LEFT_DROPS = 150;
	const int NUM_RIGHT_DROPS = 250;

	public:
		void setup();
		void update();
		void draw();

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
