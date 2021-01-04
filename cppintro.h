#pragma once

#include <iostream>
using namespace std;


// finds a factorial of a positive number less than 16
double factorial(double num){

	while ((num < 1) || (num > 16))	{

		if (num < 1){
			cout << "\n\tNumber must be positive! Try again.\n";
		}
		else if (num > 0){
			break;
		}
	}

	int f;
	int fact = 1;

	for (int i = 1; i < num; i++){
		f = num - i;
		fact = fact * f;
	}

	return fact * num;

}

// estimates Euler's number for a given number of terms
int estimate_e()
{
	int n;
	double term;
	double sum = 0;

	cout << "\n\tEnter the number of terms for e: ";
	cin >> n;

	while (n > 0)
	{
		term = 1 / (factorial(n));
		sum = sum + term;
		n--;
	}

	cout << "e of your number is: " << 1 + sum;

	return 0;
}

// approximates e to the power of user input x value
int approx_e_to_pow_x() {

	double x, eval;
	// set default values to begin evaluation of expression
	double answer = 1, denom = 1;

	cout << "Provide the value of x: ";
	cin >> x;

	// e-to-x approximation = 1 + (x^1 / 1) + (x^2 / 2) + (x^3 / 6) + (x^4 / 24) + (x^5 / 120)

	for (int i = 1; i < 6; i++) {

		eval = pow(x, i) / denom;
		// increment the denominator for next iteration of loop
		denom = denom * (i + 1);
		answer += eval;
	}

	cout << "The result of the expression is: " << answer;

	return 0;
}
