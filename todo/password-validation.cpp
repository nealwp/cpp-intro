// password-validation.cpp
// checks a password against given criteria

#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Password requirements
	// 8 char minimum
	// alphanumeric  -- ASCII 65-90 & 97-122 for letters
	// must begin with number

	string password;
	bool pwChk = false;

	while (pwChk == false)
	{
		cout << "\n\tEnter your password: ";
		cin >> password;

		//for (int i = 0; i = password.length(); i++)
		//{
		//	if (isalpha(password[i]) == false && isdigit(password[i] == false))
		//	{
		//		cout << "\n\tPassword invalid due to non-alphanumeric characters!";
		//		break;
		//	}
		//}

		if (password.length() < 8 || password[0] > 65)
		{
			cout << "\n\tPassword invalid!" << endl;
		}
		else
		{
			pwChk = true;
		}
	}

	cout << "\n\tYour password is fine, but it probably still sucks." << endl;

	return 0;
}