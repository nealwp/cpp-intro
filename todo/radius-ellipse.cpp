// radius-ellipse.cpp
// takes input from the user to calculate the radius of an ellipse

	#include <iostream>
	using namespace std;

	int main()
{
	
		cout << "What is your major radius?" << endl;
		double major_radius;
		// get the major radius from the user
		cin >> major_radius;
	
		cout << "What is your minor radius?" << endl;
		double minor_radius;
		// get the minor radius from the user
		cin >> minor_radius;

		// declare the constant value of Pi
		const double PI = 3.1459;

		// area of an ellipse -> Pi * A * B
		double ellip_area;
		ellip_area = major_radius * minor_radius * PI;

		cout << "The area of an ellipse with radius " << minor_radius << " and radius " << major_radius << " is " << ellip_area << endl;

		return 0;
}