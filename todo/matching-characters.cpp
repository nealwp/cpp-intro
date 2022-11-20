// matching-characters.cpp
// finds matching charachters between two strings input by the user

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1, str2;
	char fLetter;
	string matches = "";

	cout << "\n\tEnter a word: ";
	cin >> str1;

	cout << "\n\tEnter another word: ";
	cin >> str2;
	
	if (str1.length() >= str2.length())
	{

		for (size_t i = 0; i < str1.length(); i++)
		{
			fLetter = str1[i];
			if (str2.find(fLetter) != string::npos && matches.find(fLetter) == string::npos)
			{
				matches = matches + fLetter;
			}

		}
	}
	else if (str1.length() < str2.length())
	{
		for (size_t i = 0; i < str2.length(); i++)
		{
			fLetter = str2[i];
			if (str1.find(fLetter) != string::npos && matches.find(fLetter) == string::npos)
			{
				matches = matches + fLetter;
			}

		}
	}

	cout << "\n\tThe matching characters are: " << matches << endl;

	return 0;

}