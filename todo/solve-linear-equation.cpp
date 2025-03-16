// solve-linear-equation.cpp
// uses Cramer's rule to solve a linear equation

#include <iostream>
#include <string>
using namespace std;

/* Cramer's rule 
	ax + by = e
	cx + dy = f

	x = ed - bf / ad - bc
	y = af - ec / ad - bc

	if ad - bc = 0, there is no solution

*/
int main()
{

	double a, b, c, d, e, f, x, y;

	cout << "Enter a, b, c, d, e, and f: ";
	cin >> a >> b >> c >> d >> e >> f;
	
	if ((a * d) - (b * c) != 0)
	{
		x = ((e * d) - (b * f)) / ((a * d) - (b * c));
		y = ((a * f) - (e * c)) / ((a * d) - (b * c));
		cout << endl << "x is: " << x;
		cout << endl << "y is: " << y;
	}
	else
	{
		cout << endl << "The equation has no solution.";
	}

	return 0;
}