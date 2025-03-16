
#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{

	for (int i = n - 1; i > -1; i--)
	{
		cout << arr[i];
	}
}

int main()
{
	int arr[50];
	int n;
	int number;

	cout << "\n\tEnter the number of elements you have: ";
	cin >> n;

	cout << "\n\tEnter " << n << " elements, separated by a space: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

/*	for (int i = 0; i < n; i++)
	{
		cout << arr[i];
	}
*/

	cout << endl;
	
	reverseArray(arr, n);

	return 0;
}
