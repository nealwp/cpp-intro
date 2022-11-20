// fibonacci-me.cpp
// always remember you wrote this with no help

#include <iostream>
using namespace std;

void fibonacciThis(int stopAt, int startAt = 1)
{
	
	cout << "\n\tFibnoacci sequence for " << startAt << " to " << stopAt << ": " << startAt << "  ";
	
	for (int i = startAt, j = startAt; i < stopAt; i = i + j, j = i - j)
	{
		cout << i << "  ";
	}

	cout << endl;
}

int main()
{
	int n;
	
	cout << "\n\tEnter a number to Fibonacci to: ";
	cin >> n;
	// the fucntion takes a start value, but is default to 1
	
	fibonacciThis(n);

	return 0;
}
	