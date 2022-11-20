// factorial.cpp
// calculates and prints the factorial of a given number

#include <iostream>
using namespace std;

int main()
{
	int num = -1;

	while ((num < 1) || (num > 16))
	{
		cout << "\n\tEnter a number: ";
		cin >> num;

		if (num < 1)
		{
			cout << "\n\tNumber must be positive! Try again.\n";
		}
		else if (num > 16)
		{
			cout << "\n\tNumber too large! Overflow will occur. Try again.\n";
		}
		else if (num > 0 && num < 17)
		{
			break;
		}
	}

	int f;
	int fact = 1;

	for (int i = 1; i <= num; i++)
	{
		fact = fact * i;
	}
	
	cout << "\n\t"<< num << "! is equal to " << fact * num << endl;

	return 0;

}