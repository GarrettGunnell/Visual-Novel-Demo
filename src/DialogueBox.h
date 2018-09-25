#pragma once
#include "ofMain.h"

class DialogueBox {
public:
	DialogueBox(int x, int y);
	void draw(ofImage* character);

private:
	int x;
	int y;
};