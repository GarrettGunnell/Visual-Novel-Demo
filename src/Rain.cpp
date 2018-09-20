#include "Rain.h"

Rain::Rain(float x, float y, bool left) {
	this->x = x;
	this->left = left;
	this->angle = ofRandom(-6, 6);
	if (this->left) {
		this->y = ofRandom(295, 490);
	}
	else {
		this->y = ofRandom(330, 685);
	}
	//
	int rand = ofRandom(1000);
	if (rand < 950) {
		this->width = ofRandom(0.11, 0.15);
	}
	else {
		this->width = ofRandom(0.2, 0.23);
	}
	//
	if (this->width <= 0.15) {
		this->speed = ofRandom(8, 10);
		this->color = ofColor(175, ofRandom(75, 125));
		this->length = ofRandom(30, 35);
	}
	else {
		this->speed = ofRandom(11, 12);
		this->color = ofColor(175, 175);
		this->length = ofRandom(35, 40);
	}
}

void Rain::reset() {
	int rand = ofRandom(1000);
	if (rand < 950) {
		this->width = ofRandom(0.11, 0.15);
	}
	else {
		this->width = ofRandom(0.2, 0.23);
	}
	//
	if (this->width <= 0.15) {
		this->speed = ofRandom(8, 10);
		this->color = ofColor(175, ofRandom(75, 125));
		this->length = ofRandom(30, 35);
	}
	else {
		this->speed = ofRandom(11, 12);
		this->color = ofColor(175, 175);
		this->length = ofRandom(35, 40);
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
	this->angle = ofRandom(-6, 6);
}

void Rain::move() {
	this->y += this->speed;
	if (this->angle > 0) {
		this->x += 0.5;
	}
	else {
		this->x -= 0.5;
	}
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
	ofPushMatrix();
	ofTranslate(this->x, this->y);
	ofSetColor(this->color);
	ofRotate(this->angle);
	ofDrawRectangle(0, 0, this->width, this->length);
	ofPopMatrix();
}

