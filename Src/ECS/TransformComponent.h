#pragma once

#include "Components.h"

class TransformComponent : public Component {
private:
	int xpos = 0, ypos = 0;

public:

	TransformComponent() {
		xpos = 0;
		ypos = 0;
	}

	TransformComponent(int x, int y) {
		xpos = x;
		ypos = y;
	}

	int x() { return xpos; }
	void x(int x) { xpos = x; }
	int y() { return ypos; }
	void y(int y) { ypos = y; }

	void init() override {
		xpos = 0;
		ypos = 0;
	}

	void update() override {
		xpos++;
		ypos++;
	}

	void setPos(int x, int y) {
		xpos = x;
		ypos = y;
	}



};
