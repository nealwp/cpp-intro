//rectangle.h

#include <iostream>
using namespace std;

#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H

class RectangularCube
{
private:
	// definitions
	int length;
	int width;
	int height;

public:

	// constructors
	RectangularCube();

	RectangularCube(int length, int width, int height);

	// functions
	int getLength();
	int getWidth();
	int getHeight();
	void setLength(int length);
	void setWidth(int width);
	void setHeight(int height);
	int volume();
	int surfaceArea();

};
#endif // !RECTANGLE_H

