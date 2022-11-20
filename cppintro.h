#pragma once

#include <iostream>
#include <string>
#include <cmath>
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
			else if (diamondWidth == 0)
			{
				cout << "\n   Thanks you, and goodbye." << endl;
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

// calculates and prints the area of a polygon
int area_of_polygon()
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

// returns the count of each distinct character is a string
int count_in_string()
{
	string str;

	cout << "\n\tEnter a string: ";
	cin >> str;
	cout << endl;

	int count[26];

	for (int i = 0; i < 26; i++)
	{
		count[i] = 0;
	}

	for (int i = 0; str[i] != '\0'; i++)
	{
		count[str[i] - 'a'] = count[str[i] - 'a'] + 1;
	}

	for (int i = 0; i < 26; i++)
	{
		if (count[i] != 0)
		{
			cout << "\t" << char('a' + i) << " occured " << count[i] << " times." << endl;
		}
	}

	return 0;
}

// prints a fibonacci sequence from 1 to a given number
// always remember you wrote this with no help
void fibonacciThis(int startAt = 1)
{
	int stopAt;

	cout << "\n\tEnter a number to Fibonacci to: ";
	cin >> stopAt;

	cout << "\n\tFibnoacci sequence for " << startAt << " to " << stopAt << ": " << startAt << "  ";

	for (int i = startAt, j = startAt; i < stopAt; i = i + j, j = i - j)
	{
		cout << i << "  ";
	}

	cout << endl;
}

// computes the perimeter of a valid triangle
int triangle_perimeter()
{
	int edge1, edge2, edge3, perimeter;

	cout << "Triangle edge 1 is: ";
	cin >> edge1;
	cout << endl << "Triangle edge 2 is: ";
	cin >> edge2;
	cout << endl << "Triangle edge 3 is: ";
	cin >> edge3;

	if (edge1 + edge2 > edge3 && edge1 + edge3 > edge2 && edge2 + edge3 > edge1)
	{
		perimeter = edge1 + edge2 + edge3;
		cout << "The perimeter is " << perimeter;
	}
	else
	{
		cout << endl << "Input is invalid!";
	}

	return 0;
}


// finds n in the integer element
void searchAnElement()
{
	int n, s, val;
	bool found = false;

	cout << "\n\tEnter a 7 digit integer: ";
	cin >> n;
	cout << "\tEnter search element: ";
	cin >> s;

	while (n > 0)
	{
		val = n % 10;
		if (val == s)
		{
			found = true;
			break;
		}
		else
		{
			n = n / 10;
		}
	}

	if (found)
	{
		cout << "\tElement found.." << endl;
	}
	else
	{
		cout << "\tNot found.." << endl;
	}
}

// uses Cramer's rule to solve a linear equation
int solve_linear_equation()
{
/*

	Cramer's rule
	ax + by = e
	cx + dy = f

	x = ed - bf / ad - bc
	y = af - ec / ad - bc

	if ad - bc = 0, there is no solution

*/

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

// takes a number of rows and columns from user and prints a matrix of triangle shapes
int triangle_matrix()
{
	int rows;
	int columns;

	cout << "\n\tEnter the number of rows: ";
	cin >> rows;
	cout << "\n\tEnter the number of columns: ";
	cin >> columns;

	cout << endl;

	for (int j = 0; j < rows; j++)
	{
		char star = '*';
		char space = ' ';
		int  triWidth = 5;

		int spcnum = triWidth / 2;

		for (int i = 1; i < triWidth + 2; i += 2)
		{
			string strline = string(i, star);
			string spcline = string(spcnum--, space);

			for (int j = 0; j < columns; j++)
			{
				cout << spcline << strline << spcline;
			}

			cout << endl;

		}
	}

	return 0;
}

// returns sum, average and total above average for a set of numbers
int sum_average_above_avg()
{
	int numbers[4];
	int sum, abv_avg = 0;
	double average;

	cout << "Enter a value: ";
	cin >> numbers[0];

	for (int i = 1; i < 4; i++)
	{
		cout << "Enter the next value: ";
		cin >> numbers[i];
	}

	sum = numbers[0] + numbers[1] + numbers[2] + numbers[3];
	average = double(sum) / 4;

	for (int i = 0; i < 5; i++)
	{
		if (numbers[i] > average)
		{
			abv_avg++;
		}
	}

	cout << "           Sum: " << sum << endl;
	cout << "       Average: " << average << endl;
	cout << " Above Average: " << abv_avg << endl;

	return 0;
}


// takes input from the user to calculate a mathematical expression
int orderOfOperations()
{
	double a, b, c, d, r;
	char var_arr[5] = { 'a', 'b', 'c', 'd', 'r' };
	double num_arr[5] = {};

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter the value of " << var_arr[i] << ": ";
		cin >> num_arr[i];
	}

	a = num_arr[0];
	b = num_arr[1];
	c = num_arr[2];
	d = num_arr[3];
	r = num_arr[4];

	// math expression = (4 / (3 * (r + 34))) - (9 * (a + (b * c))) + ((3 + (d * (2 + a))) / (a + (b * d))) 

	double output = (4 / (3 * (r + 34))) - (9 * (a + (b * c))) + ((3 + (d * (2 + a))) / (a + (b * d)));

	cout << "The result of the expression is: " << output;

	return 0;
}

// returns the elements in one array that exist in another
void commonElements()
{
	int n = 0;
	int arr[50];
	int arr2[50];

	cout << "\n\tEnter the number of elements for each list: ";
	cin >> n;
	cout << "\n\tEnter " << n << " numbers for list1: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "\n\tEnter " << n << " numbers for list2: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr2[i];
	}

	int outArr[50];
	int outCount = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i] == arr2[j])
			{
				outArr[outCount] = arr2[j];
				outCount++;
			}
		}
	}

	if (outCount > 0)
	{
		cout << "\n\tThe matching elements are: ";
		for (int i = 0; i < outCount; i++)
		{
			cout << outArr[i] << " ";
		}
		cout << endl;
	}
	else
	{
		cout << "There are no matching elements." << endl;
	}
}

// finds the smallest element in an user input array
int minInArray()
{
	int arr[50];
	int num_elem;

	cout << "\n\tEnter the number of elements you have: ";
	cin >> num_elem;

	cout << "\n\tEnter " << num_elem << " elements, separated by a space: ";

	for (int i = 0; i < num_elem; i++)
	{
		cin >> arr[i];
	}

	int arrMin = arr[0];

	for (int i = 0; i < num_elem; i++)
	{
		if (arrMin > arr[i])
		{
			arrMin = arr[i];
		}
	}

	cout << "\n\tThe smallest element in the array is: " << arrMin << endl;

	return 0;
}



void arrayMin(int arr[], int num_elem)
{
	
}