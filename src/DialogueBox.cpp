#include "DialogueBox.h"

DialogueBox::DialogueBox(int x, int y) {
	this->x = x;
	this->y = y;
}

void DialogueBox::draw(ofImage* character) {
	ofSetRectMode(OF_RECTMODE_CENTER);
	character->draw(this->x, this->y);
	ofSetRectMode(OF_RECTMODE_CORNER);
}