#include "Rain.h"

Rain::Rain(float x, float y, bool left) {
	this->x = x;
	this->left = left;
	if (this->left) {
		this->y = ofRandom(295, 490);
	}
	else {
		this->y = ofRandom(330, 685);
	}
	//
	int rand = ofRandom(1000);
	if (rand < 900) {
		this->width = 0.135;
	}
	else {
		this->width = 0.25;
	}
	//
	if (this->width < 0.15) {
		this->speed = ofRandom(11, 12);
		this->color = ofColor(175, ofRandom(75, 125));
		this->length = 30;
	}
	else {
		this->speed = ofRandom(23, 27);
		this->color = ofColor(175, 200);
		this->length = 40;
	}
}

void Rain::reset() {
	int rand = ofRandom(1000);
	if (rand < 900) {
		this->width = 0.135;
	}
	else {
		this->width = 0.25;
	}
	//
	if (this->width < 0.15) {
		this->speed = ofRandom(11, 12);
		this->color = ofColor(175, ofRandom(75, 125));
		this->length = 30;
	}
	else {
		this->speed = ofRandom(23, 27);
		this->color = ofColor(175, 200);
		this->length = 40;
	}
	//
	if (this->left == true) {
		this->x = ofRandom(470, 805);
		this->y = 295 - this->length;
	}
	else {
		this->x = ofRandom(1095, 1390);
		this->y = 330 - this->length;
	}
}

void Rain::move() {
	this->y += this->speed;
	if (this->left) {
		if (this->y > 490) {
			this->reset();
		}
	}
	else {
		if (this->y > 685) {
			this->reset();
		}
	}
}

void Rain::draw() {
	ofSetColor(this->color);
	ofDrawRectangle(this->x, this->y, this->width, this->length);
}

