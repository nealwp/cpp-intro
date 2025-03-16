// talk-to-header-files.cpp
// simple example of creating a class Circle

#include <iostream>
#include <string>
#include "Shapes.h"
#include "Employee.h"
using namespace std;

int main()
{
	Circle c1;

	c1.radius = 4;

	cout << "\n\tThe area is " << c1.getAreaOfCircle() << endl;

	//Employee Bob(100, "Mikey", 500, "FNG");
	//Employee Joe(200, "Allen", 250, "Senior");

	//Bob.printEmployeeData();
	//Joe.printEmployeeData();

	Rectangle r1(12, 3);
	r1.readHeightWidth();
	cout << "\n\tArea:      " << r1.getArea();
	cout << "\n\tPerimeter: " << r1.getPerim();

	Rectangle arrRect[5];

	for (int i = 0; i < 5; i++)
	{
		arrRect[i].setHeight(i * 2);
		arrRect[i].setWidth(i * 3);
		cout << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		arrRect[i].readHeightWidth();
		cout << "\n\tArea of rectangle " << i << ":      " << arrRect[i].getArea();
		cout << "\n\tPerimeter of rectangle " << i  << ": " << arrRect[i].getPerim();
		cout << endl;
	}


	return 0;
}