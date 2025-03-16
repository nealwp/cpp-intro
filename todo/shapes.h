#pragma once
#include <iostream>
using namespace std;

#ifndef SHAPES_H
#define SHAPES_H

class Circle
{
public:
	double radius;

	Circle() // default constructor - NO RETURN IN CONSTUCTORS!
	{
		radius = 0.0;
	}

	Circle(double r) // constructor with argument
	{
		radius = r;
	}

	double getAreaOfCircle()
	{
		double area;
		area = 3.14159 * (radius * radius);
		return area;
	}

};

class Rectangle
{
public:
	int height;
	int width;

	Rectangle() // def constructor
	{
		height = 0;
		width = 0;
	}

	Rectangle(int h, int w)
	{
		height = h;
		width = w;
	}

	void readHeightWidth()
	{
		cout << "\n\tHeight: " << height;
		cout << "\n\tWidth:  " << width;
	}
	
	int getArea()
	{
		int area;
		area = height * width;
		return area;
	}

	int getPerim()
	{
		int perim;
		perim = (2 * height) + (2 * width);
		return perim;
	}

	void setHeight(int h)
	{
		height = h;
	}

	void setWidth(int w)
	{
		width = w;
	}


};

#endif SHAPES_H