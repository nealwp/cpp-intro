// do-stuff-to-arrays.cpp
// functions for working with arrays

#include <iostream>
using namespace std;

void binarySearch(int arr[], int n)
{
	int s;
	
	cout << "\n\tEnter the number to search for in the array: ";
	cin >> s;
	
	int lo = 0, hi = n - 1, mid, pos = -1;

	while (lo <= hi)
	{
		mid = (lo + hi) / 2;
		
		if (s == arr[mid])
		{
			pos = mid;
			break;
		}
		else if (s > arr[mid]) 
		{ 
			lo = mid + 1; 
		}
		else 
		{ 
			hi = mid - 1;
		}
	}

	cout << "\n\tSearch found at element " << pos + 1;;
}

void readArray(int arr[], int num_elem)
{
	cout << "\n\tEnter " << num_elem << " elements, separated by a space: ";
	
	for (int i = 0; i < num_elem; i++)
	{
		cin >> arr[i];
	}
}

void printArray(int arr[], int num_elem)
{
	cout << "\n\t";
	
	for (int i = 0; i < num_elem; i++)
		{
			cout << arr[i] << " ";
		}
}

void selectionSort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int curMin = arr[i];
		int curMinIndex = i;

		for (int j = i + 1; j < n; j++)
		{
			if (curMin > arr[j])
			{
				curMin = arr[j];
				curMinIndex = j;
			}
		}

		if (curMin != i)
		{
			arr[curMinIndex] = arr[i];
			arr[i] = curMin;
		}
	}
}


int main()
{
	int arr[50];
	int n;

	cout << "\n\tEnter the number of elements you have: ";
	cin >> n;

	readArray(arr, n);
	printArray(arr, n);

	selectionSort(arr, n);
	printArray(arr, n);

	binarySearch(arr, n);

	return 0;
}
