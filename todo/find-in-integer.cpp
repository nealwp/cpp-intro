// find-in-integer.cpp
// finds n in the integer element

#include <iostream>
using namespace std;

bool searchAnElement(int n, int searchElement)
{
	int val;
	
	while (n > 0)
	{
		val = n % 10;
		if (val == searchElement)
		{
			return true;
			break;
		}
		else
		{
			n = n / 10;
		}
	}

	return false;
}


int main()
{

	int n, s;

	cout << "\n\tEnter N: ";
	cin >> n;
	cout << "\tEnter search element: ";
	cin >> s;

	if (searchAnElement(n, s))
	{
		cout << "\tElement found.." << endl;
	}
	else
	{
		cout << "\tNot found.." << endl;
	}

	return 0;
}