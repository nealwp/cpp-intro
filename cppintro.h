#pragma once

#include <iostream>
#include <string>
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

// calculates a tip from a bill and percentage
int tip_calculator(){
	
	float bill_amt;
	float tip_pct;

	cout << "Enter the bill amount (in dollars): ";
	// get the bill amount from the user
	cin >> bill_amt;

	cout << "Enter the tip percentage (%): ";
	// get the tip percentage from the user
	cin >> tip_pct;

	// convert tip_pct to a decimal, calculate tip and total
	float dec_tip = tip_pct / 100;
	float tip = bill_amt * dec_tip;
	float total = bill_amt + tip;

	// output response to user
	cout << "You need to pay $" << total << " that is $" << bill_amt << " for the food + $" << tip << " as a tip." << endl;

	return 0;
}

// test if an input is a palindrome
int test_palindrome(){
	
	string five_digit_nbr;
	int str_end, str_start = 0;
	bool palind = true;

	cout << "Enter a five digit value: ";
	cin >> five_digit_nbr;
	//getline(cin, five_digit_nbr);

	str_end = five_digit_nbr.length() - 1;

	while (str_start < str_end){

		if (five_digit_nbr[str_start] != five_digit_nbr[str_end]){
			palind = false;
			break;
		}

		str_start++;
		str_end--;
	}

	if (palind)	{
		cout << five_digit_nbr << " is a palindrome!";
	}
	else {
		cout << "Sorry, " << five_digit_nbr << " is not a palindrome.";
	}

	return 0;
}


// toCelsius is a switch to determine if the temperature is being converted to
// Celsius or Farenheit, with conversion to Celsius set to default
double convertTemp(double temp, bool toCelsius = true){
	double convTemp;

	if (toCelsius)	{
		convTemp = (temp - 32.0) * (5.0 / 9.0);
	} else {
		convTemp = (temp * (9.0 / 5.0)) + 32.0;
	}
	return convTemp;
}

int temperature_conversion(){

	double temp;
	int userSays;

	cout << "\n\tEnter a temperature: ";
	cin >> temp;
	cout << "\n\tConvert to:\n\t 1) Farenheit \n\t 2) Celsius \n\t";
	cin >> userSays;

	userSays = userSays - 1;

	cout << "\n\t" << temp << " is equal to " << convertTemp(temp, userSays) << " degrees" << endl;

	return 0;
}

// gets the radius of an ellipse
int ellipse_radius(){

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