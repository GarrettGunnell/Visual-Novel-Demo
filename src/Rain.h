#pragma once
#include "ofMain.h"

class Rain {
public:
	Rain(float x, float y, bool left);
	void move();
	void draw();
	void reset();

private:
	float x;
	float y;
	float speed;
	float length;
	float width;
	ofColor color;
	bool left;
};