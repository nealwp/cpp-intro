#pragma once

#include <iostream>
#include <string>
using namespace std;


// finds a factorial of a positive number less than 16
double factorial(double num)
{

	while ((num < 1) || (num > 16))
	{

		if (num < 1)
		{
			cout << "\n\tNumber must be positive! Try again.\n";
		}
		else if (num > 0)
		{
			break;
		}
	}

	int f;
	int fact = 1;

	for (int i = 1; i < num; i++)
	{
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
int approx_e_to_pow_x() 
{

	double x, eval;
	// set default values to begin evaluation of expression
	double answer = 1, denom = 1;

	cout << "Provide the value of x: ";
	cin >> x;

	// e-to-x approximation = 1 + (x^1 / 1) + (x^2 / 2) + (x^3 / 6) + (x^4 / 24) + (x^5 / 120)

	for (int i = 1; i < 6; i++) 
	{

		eval = pow(x, i) / denom;
		// increment the denominator for next iteration of loop
		denom = denom * (i + 1);
		answer += eval;
	}

	cout << "The result of the expression is: " << answer;

	return 0;
}

// calculates a tip from a bill and percentage
int tip_calculator()
{
	
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
int test_palindrome()
{
	
	string five_digit_nbr;
	int str_end, str_start = 0;
	bool palind = true;

	cout << "Enter a five digit value: ";
	cin >> five_digit_nbr;
	//getline(cin, five_digit_nbr);

	str_end = five_digit_nbr.length() - 1;

	while (str_start < str_end)
	{

		if (five_digit_nbr[str_start] != five_digit_nbr[str_end])
		{
			palind = false;
			break;
		}

		str_start++;
		str_end--;
	}

	if (palind)	
	{
		cout << five_digit_nbr << " is a palindrome!";
	}
	else 
	{
		cout << "Sorry, " << five_digit_nbr << " is not a palindrome.";
	}

	return 0;
}


// toCelsius is a switch to determine if the temperature is being converted to
// Celsius or Farenheit, with conversion to Celsius set to default
double convertTemp(double temp, bool toCelsius = true)
{
	double convTemp;

	if (toCelsius)	
	{
		convTemp = (temp - 32.0) * (5.0 / 9.0);
	} 
	else 
	{
		convTemp = (temp * (9.0 / 5.0)) + 32.0;
	}
	return convTemp;
}

int temperature_conversion()
{

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
int ellipse_radius()
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


// returns the sum of the numbers in a integer without the use of arrays or string functions
int sum_integer()
{

	int number;
	int digit = 0;

	cout << "Enter a 10 digit number: ";
	cin >> number;

	while (number > 0) 
	{
		digit = digit + number % 10;
		number = number / 10;
	}

	cout << "The sum is: " << digit;

	return 0;
}


// tests if a year is a leap year, returns number of days
int days_in_year()
{

	int year;
	int daysInYear = 365;

	cout << "Enter a year: ";
	cin >> year;

	if (year % 4 == 0 || year % 100 == 0 && year % 400 == 0)
	{
		daysInYear = 366;
	}

	cout << " There are " << to_string(daysInYear) << " days in " << to_string(year) << ".";

	return 0;

}


// takes a max width from user and prints a diamond shape on the screen.
// exits if user inputs a width greater than 100

int print_diamond_shape()
{

	while (true)
	{

		char star = '*';
		char space = ' ';
		int diamondWidth = 2;

		while (true)
		{
			cout << "\n    Enter max width for your diamond, or 0 to exit: ";
			cin >> diamondWidth;
			if (diamondWidth % 2 != 0 && diamondWidth < 101)
			{
				cout << "\n\n";
				break;
			}
			else if (diamondWidth > 100)
			{
				cout << "\n    bad choice. goodbye." << endl;
				return 0;
			}

			cout << "\n   Even numbers are not allowed! Try again. \n" << endl;
		}

		int num_spaces = diamondWidth / 2;

		for (int i = 1; i < diamondWidth + 2; i += 2)
		{

			string star_line = string(i, star);
			string space_line = string(num_spaces--, space);

			cout << space_line << star_line << endl;

		}

		num_spaces = 1;

		for (int j = diamondWidth - 2; j > 0; j -= 2)
		{

			string star_line = string(j, star);
			string space_line = string(num_spaces++, space);

			cout << space_line << star_line << endl;
		}

	}
	return 0;
}

// creates a pyramid of odd numbers
void oddPyramid()
{
	int lines;

	cout << "Enter a number of lines: ";
	cin >> lines;

	int middle = 1;
	int eol = lines + (lines - 1);
	int line2 = eol;

	do
	{
		for (int i = eol; i > middle; i = i - 2)
		{

			cout << " " << i;
		}

		for (int i = middle; i <= eol; i = i + 2)
		{
			cout << " " << i;
		}

		cout << endl;
		eol = eol - 2;
		lines--;

		if (lines > 5)
		{
			cout << string((line2 + 1) - eol, ' ');
		}
		else
		{
			cout << string((line2 + 2) - eol, ' ');
		}

	} while (eol > 0);

}


// returns all prime numbers in a given range
int find_primes_in_range()
{
	int m;
	int n;

	cout << "\tEnter a start number: ";
	cin >> m;
	cout << "\tEnter an end number: ";
	cin >> n;

	while (m <= n)
	{
		bool prime = true;

		for (int i = 2; i <= m / 2; i++)
		{
			if (m % i == 0)
			{
				prime = false;
				break;
			}
		}

		if (prime)
		{
			cout << m << " ";
		}

		m++;
	}
	return 0;
}


// prints a tables of squares and cubes for numbers 0-10
int squares_and_cubes()
{
	cout << "\n\t<<SQUARE & CUBE TABLE>>\n" << endl;
	cout << "\tnumber\tsquare\tcube" << endl;
	cout << "\t------\t------\t----" << endl;

	for (int i = 0; i < 11; i++)
	{
		cout << "\t" << i << "\t" << i * i << "\t" << i * i * i << endl;
	}

	return 0;
}

// reverses a given number
int reverse_number()
{
	int n;
	cout << "\tEnter a number: ";
	cin >> n;

	int reverse = 0;

	while (n > 0)
	{
		reverse = reverse * 10 + (n % 10);
		n = n / 10;
	}

	cout << "\n\n\t" << reverse;

	return 0;
}

//prints a square of given size
void squareOfAsterisks()
{
	int side;

	cout << "\n\tEnter the number the length of a side: ";
	cin >> side;

	for (int i = 0; i < side; i++)
	{
		cout << string(side, '*') << endl;
	}
}