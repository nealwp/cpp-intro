// square-root.cpp
// finds square roots for a range of numbers

#include <iostream>
#include <cmath>
using namespace std;

void SquareRoots(double numOne, double numTwo)
{
	cout << "\n\tnumber\t\tsquare root";
	cout << "\n\t------\t\t-----------";

	for (double i = numOne; i < numTwo + 2; i += 2.0)
	{
		cout << "\n\t" << i << "\t\t" << sqrt(i);
	}

	cout << endl;
}


int main()
{

	SquareRoots(2.0, 20.0);
	cout << endl;
	SquareRoots(10.0, 50.0);
	
	return 0;

}