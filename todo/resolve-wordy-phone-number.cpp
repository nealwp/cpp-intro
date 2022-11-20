// resolve-wordy-phone-number.cpp
// converts a phone number with letters to digits

#include <iostream>
#include <string>
using namespace std;

char digitForLetter (char letterNum)
{
	if (letterNum > 97)
	{
		letterNum = letterNum - 32;
	}

	switch (letterNum)
	{
	case 'A':
	case 'B':
	case 'C':
		letterNum = '2'; break;
	case 'D':
	case 'E':
	case 'F': 
		letterNum = '3'; break;
	case 'G':
	case 'H': 
	case 'I':
		letterNum = '4'; break;
	case 'J':
	case 'K':
	case 'L':
		letterNum = '5'; break;
	case 'M':
	case 'N':
	case 'O':
		letterNum = '6'; break;
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
		letterNum = '7'; break;
	case 'T':
	case 'U':
	case 'V':
		letterNum = '8'; break;
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
		letterNum = '9'; break;
	}

	return letterNum;
}

int main()
{
	string phoneNumber;
	
	cout << "\n\tEnter a phone number with a word in it: ";
	cin >> phoneNumber;
	// the fucntion takes a start value, but is default to 1
		
	cout << "\n\t";
	
	for (size_t i = 0; i < phoneNumber.length(); i++)
	{
		cout << digitForLetter(phoneNumber[i]);
	}

	cout << endl;

	return 0;
}
	