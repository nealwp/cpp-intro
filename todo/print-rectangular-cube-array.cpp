// print-rectangular-cube-array.cpp

#include "Rectangle.h"
#include <iostream>
using namespace std;

RectangularCube::RectangularCube()
{
	length = 1;
	width = 1;
	height = 1;
};

RectangularCube::RectangularCube(int length, int width, int height)
{
	this->length = length;
	this->width = width;
	this->height = height;
};

int RectangularCube::getLength()
{
	return length;
}

int RectangularCube::getWidth()
{
	return width;
}

int RectangularCube::getHeight()
{
	return height;
}

void RectangularCube::setLength(int length)
{
	cout << "\n\tSetting the length to " << length << "..." << endl;
	this->length = length;
}

void RectangularCube::setWidth(int width)
{	
	cout << "\n\tSetting the width to " << width << "..." << endl;
	this->width = width;
}

void RectangularCube::setHeight(int height)
{
	cout << "\n\tSetting the height to " << height << "..." << endl;
	this->height = height;
}

int RectangularCube::volume()
{
	int volume = length * width * height;
	return volume;
}

int RectangularCube::surfaceArea()
{
	int surfaceArea = (2 * length * width) + (2 * length * height) + (2 * width * height);
	return surfaceArea;
}

void printCube(RectangularCube rc)
{
	cout << " L= " << rc.getLength() << ", W= " << rc.getWidth() << ", H= " << rc.getHeight() << ", V= " << rc.volume() << ", A= " << rc.surfaceArea();
}

int main()
{
	int length;
	int width;
	int height;

	RectangularCube rectangles[5];

	for (int i = 0; i < 5; i++)
	{
		length = rand() % 10 + 1;
		width = rand() % 10 + 1;
		height = rand() % 10 + 1;

		rectangles[i] = RectangularCube(length, width, height);
	}

	for (int i = 0; i < 5; i++)
	{
		cout << "\n\tRectangular Cube " << i << " values: ";
		printCube(rectangles[i]);
	}

	cout << endl;

	return 0;
}