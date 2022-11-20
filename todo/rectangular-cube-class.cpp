// rectangular-cube-class.cpp

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

int main()
{
	RectangularCube defRect;
	RectangularCube custRect(4, 6 , 3);
	char param;
	int size;


	cout << "\n";
	
	cout << "\tDefault rectangle volume:       " << defRect.volume() << endl;
	cout << "\tDefault rectangle surface area: " << defRect.surfaceArea() << endl;
	
	cout << "\n";
	
	cout << "\tCustom rectangle volume:        " << custRect.volume() << endl;
	cout << "\tCustom rectangle surface area:  " << custRect.surfaceArea() << endl;

	cout << "\n";

	cout << "\n\tEnter the parameter (L = Length / W = Width / H = Height) you wish to set: ";
	cin >> param;
	cout << "\n\tEnter the size of the parameter: ";
	cin >> size;


	switch (param) 
	{
		case 'L': defRect.setLength(size); break;
		case 'l': defRect.setLength(size); break;
		case 'W': defRect.setWidth(size); break;
		case 'w': defRect.setWidth(size); break;
		case 'H': defRect.setHeight(size); break;
		case 'h': defRect.setHeight(size); break;
	}

	cout << "\tUpdated rectangle volume:       " << defRect.volume() << endl;
	cout << "\tUpdated rectangle surface area: " << defRect.surfaceArea() << endl;

	cout << "\n\tAssigning from anonymous object...\n" << endl;
	defRect = RectangularCube(3, 2, 1);

	cout << "\tUpdated rectangle volume:       " << defRect.volume() << endl;
	cout << "\tUpdated rectangle surface area: " << defRect.surfaceArea() << endl;

	return 0;
}