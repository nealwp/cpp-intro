// sin-of-x.cpp 
// takes x as input and calculates sin

#include <iostream>
using namespace std;

double factorialFunc(double n);
void sinFunc(double x);

int main()
{
	double x;
	const double PI = 3.14159;

	cout << "\n\tEnter the value of x: ";
	cin >> x;

	cout << endl;

	// call my function
	sinFunc(PI / x);

	return 0;
}


double factorialFunc(double n)
{
	double fact = 1;

	for (double i = 1; i <= n; i++)
	{
		fact = fact * i;
	}

	fact = fact * n;

	return fact;
}

void sinFunc(double x)
{

	for (int terms = 5; terms < 21; terms = terms * 2)
	{
		double result = 0;
		double power = 3;

		for (double i = 1; i < terms; i++)
		{
			result = (pow(x, power) / factorialFunc(power)) + result;
			power = power + 2;
		}

		result = x - result;

		cout << "Approximate sin of x using " << terms << " terms is: " << result << endl;
	}
}







