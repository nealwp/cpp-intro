// circle-class.cpp
// simple example of creating a class Circle

#include <iostream>
using namespace std;

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

	void printAreaOfCircle()
	{
		double area;
		area = 3.14159 * (radius * radius);
		cout << "\n\tArea of a circle is " << area << endl;
	}

};

int main()
{
	Circle c1;

	c1.radius = 4;

	c1.printAreaOfCircle();

	return 0;
}