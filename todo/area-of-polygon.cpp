// area-of-polygon.cpp
// calculates and prints the area of a polygon

#include <iostream>
using namespace std;
#include <cmath>

int main()
{
	
	// area = (n * s^2) / (4 * tan(pi/n))

	int sides;
	double lenSide;
	const double PI = 3.141592;
	double plygnArea;
	
	cout << "\n\tEnter the number of sides: ";
	cin >> sides;
	cout << "\n\tEnter the length of a side: ";
	cin >> lenSide;
	
	plygnArea = sides * (lenSide * lenSide) / (4 * tan((PI / sides)));
	
	cout << "\n\tThe area of the polygon is " << plygnArea << endl;
	
	return 0;

}