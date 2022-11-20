// fnb-atm.cpp
// simulates an atm machine

#include <iostream>
#include <string>
using namespace std;

// declare functions
void populateAccounts(int arr[], int num_accounts);
int welcomeScreen();
int menuSelect();
void checkBalance(int arr[], int acct);
void depositFunds(int arr[], int acct);
void withdrawFunds(int arr[], int acct);
int getBalance(int arr[], int acct);
void setBalance(int arr[], int acct, int new_bal);

// declare error count to use for withdraw menu
static int withdrawErrors;

int main()
{
	const int num_accounts = 10;
	int arrAccounts[num_accounts];

	// on load, set all account balances to 1000
	populateAccounts(arrAccounts, num_accounts);

	int acct;
	int menuChoice = 0;

	while (true)
	{
		menuChoice = 0;

		// call default screen
		acct = welcomeScreen();

		while (menuChoice != 4)
		{
			// cycles the console screen
			system("CLS");
			// reset withdraw errors
			withdrawErrors = 0;
			// call the main menu screen on account login
			menuChoice = menuSelect();

			// user input directs to specified screen
			switch (menuChoice)
			{
			case 1: checkBalance(arrAccounts, acct); break;
			case 2: depositFunds(arrAccounts, acct); break;
			case 3: withdrawFunds(arrAccounts, acct); break;
			}

		}
		// only works on Windows!
		system("CLS");
	}
}

// boot function only
void populateAccounts(int arr[], int num_accounts)
{
	// all accounts start with $1000 on boot 
	for (int row = 0; row < num_accounts; row++)
	{
		arr[row] = 1000;
	}
}


// returns the account balance based on the user
int getBalance(int arr[], int acct)
{
	int balance = arr[acct];
	return balance;
}

// updates the account balance
void setBalance(int arr[], int acct, int new_bal)
{
	arr[acct] = new_bal;
}


// default logo screen for log-in; returns the users account number to main
int welcomeScreen()
{
	int acct;
	int errcount = 0;


	cout << "\n\n";
	cout << string(21, ' ') << string(12, '#') << string(6, ' ') << string(3, '#') << string(6, ' ');
	cout << string(3, '#') << string(7, ' ') << string(9, '#') << endl;
	cout << string(20, ' ') << string(12, '#') << string(6, ' ') << string(4, '#') << string(5, ' ');
	cout << string(3, '#') << string(7, ' ') << string(3, '#') << string(5, ' ') << string(3, '#') << endl;
	cout << string(19, ' ') << string(3, '#') << string(15, ' ') << string(5, '#') << string(4, ' ');
	cout << string(3, '#') << string(7, ' ') << string(3, '#') << string(6, ' ') << string(3, '#') << endl;
	cout << string(18, ' ') << string(3, '#') << string(15, ' ') << string(6, '#') << string(3, ' ');
	cout << string(3, '#') << string(7, ' ') << string(3, '#') << string(5, ' ') << string(3, '#') << endl;
	cout << string(17, ' ') << string(8, '#') << string(10, ' ') << string(3, '#') << " " << string(3, '#');
	cout << "  " << string(3, '#') << string(7, ' ') << string(9, '#') << endl;
	cout << string(16, ' ') << string(8, '#') << string(10, ' ') << string(3, '#') << "  " << string(3, '#');
	cout << " " << string(3, '#') << string(7, ' ') << string(3, '#') << string(5, ' ') << string(3, '#') << endl;
	cout << string(15, ' ') << string(3, '#') << string(15, ' ') << string(3, '#') << string(3, ' ');
	cout << string(6, '#') << string(7, ' ') << string(3, '#') << string(6, ' ') << string(3, '#') << endl;
	cout << string(14, ' ') << string(3, '#') << string(15, ' ') << string(3, '#') << string(4, ' ');
	cout << string(5, '#') << string(7, ' ') << string(3, '#') << string(5, ' ') << string(3, '#') << endl;
	cout << string(13, ' ') << string(3, '#') << string(15, ' ') << string(3, '#') << string(5, ' ');
	cout << string(4, '#') << string(7, ' ') << string(9, '#') << endl;
	cout << "\n\n";
	cout << string(80, '=') << endl;
	cout << "\n\n";
	cout << string(80, '*') << endl;
	cout << string(23, '*');
	cout << "  Welcome to FIFTH NOTIONAL BANK!  ";
	cout << string(22, '*') << endl;
	cout << string(80, '*') << endl;
	cout << string(13, '<');
	cout << "    A completely legitimate financial institution    ";
	cout << string(14, '>') << "\n\n";

	cout << "Please enter your account number to begin: ";
	cin >> acct;


	// error message if invalid account is entered
	while (acct > 9 && errcount < 3)
	{
		system("CLS");
		cout << "\n";
		cout << "    Account does not exist! Repeated failed attempts will result in system lock." << endl;
		cout << string(80, '-') << endl;
		cout << "    Please try again: ";
		errcount++;
		cin >> acct;
	}

	// system locked after 3 errors. must reboot use again
	if (errcount > 2)
	{
		// only works on Windows!
		system("CLS");

		while (true)
		{
			cout << "\n" << endl;
			cout << string(7, '*');
			cout << "  ERROR! ATM HAS BEEN LOCKED OUT! CONTACT SYSTEM ADMINISTRATOR!  ";
			cout << string(7, '*');
			cin >> acct;
		}
	}

	return acct;
}


// main menu screen where user selects options
int menuSelect()
{
	int menuChoice;

	cout << endl;
	cout << string(80, '=') << endl;
	cout << string(28, ' ');
	cout << "Please make a selection";
	cout << string(28, ' ') << endl;
	cout << string(80, '=') << "\n" << endl;
	cout << " 1)   Check Balance" << string(40, ' ') << "Withdraw Funds   (3 " << endl;
	cout << " 2)   Deposit Funds" << string(48, ' ') << "Logout   (4 " << endl;
	cout << "\n\t" << "Option: ";
	cin >> menuChoice;

	return menuChoice;
}


//check balance screen
void checkBalance(int arr[], int acct)
{

	int balance = getBalance(arr, acct);
	int userInput;

	// only works on Windows!
	system("CLS");

	cout << endl;
	cout << "==============================================================" << endl;
	cout << "                         Account Balance                      " << endl;
	cout << "==============================================================" << "\n" << endl;
	cout << "        Your current account balance is: $" << balance << "\n\n" << endl;
	cout << "--------------------------------------------------------------" << endl;
	if (balance < 100)
	{
		cout << " WARNING! LOW BALANCE!! \n" << endl;
	}
	cout << " 1)    Return to main menu\n" << endl;
	cin >> userInput;

}

// deposit screen
void depositFunds(int arr[], int acct)
{
	int balance = getBalance(arr, acct);
	int depositAmount;
	int userInput;

	// only works on Windows!
	system("CLS");

	cout << endl;
	cout << "==============================================================" << endl;
	cout << "                         Deposit Funds                        " << endl;
	cout << "==============================================================" << "\n" << endl;
	cout << "        Your current account balance is: $" << balance << "\n\n" << endl;
	cout << "\n   How much would you like to deposit today?  $";
	cin >> depositAmount;
	cout << "\n\n       Please confirm the amount is correct:  $" << depositAmount << endl;
	cout << "--------------------------------------------------------------" << endl;
	cout << " 1)  Confirm                                       Cancel  (2 \n" << endl;

	cin >> userInput;
	if (userInput == 1)
	{

		setBalance(arr, acct, balance + depositAmount);

		system("CLS");
		cout << "==============================================================" << endl;
		cout << "                         Deposit Funds                        " << endl;
		cout << "==============================================================" << "\n" << endl;
		balance = getBalance(arr, acct);
		cout << "         Deposit sucessful! Your new balance is:  $" << balance << endl;
		cout << "--------------------------------------------------------------" << endl;
		cout << " 1)  OK\n" << endl;
		cin >> userInput;
	}
}


// withdraw screen
void withdrawFunds(int arr[], int acct)
{
	int balance = getBalance(arr, acct);
	int withdrawAmount;
	int userInput;

	// only works on Windows!
	system("CLS");

	cout << endl;
	cout << "==============================================================" << endl;
	cout << "                         Withdraw Funds                       " << endl;
	cout << "==============================================================" << "\n" << endl;
	cout << "        Your current account balance is: $" << balance << "\n\n" << endl;
	if (balance < 100)
	{
		cout << " WARNING! LOW BALANCE!! \n" << endl;
	}
	cout << "\n   How much would you like to withdraw today?  $";
	cin >> withdrawAmount;


	// gives error messages if user attempts to overdraw account
	if (withdrawAmount > balance && withdrawErrors < 2)
	{
		withdrawErrors++;
		cout << "\n\n            ***   Insufficient funds!   ***               " << endl;
		cout << "--------------------------------------------------------------" << endl;
		cout << " 1)  OK\n" << endl;
		cin >> userInput;
		withdrawFunds(arr, acct);
	}
	// withdraw confirmation
	else if (withdrawAmount < balance && withdrawErrors < 2)
	{
		cout << "\n\n       Please confirm the amount is correct:  $" << withdrawAmount << endl;
		cout << "--------------------------------------------------------------" << endl;
		cout << " 1)  Confirm                                       Cancel  (2 \n" << endl;

		cin >> userInput;

		if (userInput == 1)
		{

			setBalance(arr, acct, balance - withdrawAmount);

			system("CLS");
			cout << "==============================================================" << endl;
			cout << "                         Withdraw Funds                       " << endl;
			cout << "==============================================================" << "\n" << endl;
			balance = getBalance(arr, acct);
			cout << "         Withdrawal sucessful! Your new balance is:  $" << balance << endl;
			cout << "--------------------------------------------------------------" << endl;
			if (balance < 100)
			{
				cout << " WARNING! LOW BALANCE!! \n" << endl;
			}
			cout << " 1)  OK\n" << endl;
			cin >> userInput;
		}
	}
	else
	{
		cout << "\n\n            ***   Insufficient funds!   ***               " << endl;
		cout << "--------------------------------------------------------------" << endl;
		cout << "                Returning to main menu...                     " << endl;
		cout << " 1)  OK\n" << endl;
		cin >> userInput;
	}
}
