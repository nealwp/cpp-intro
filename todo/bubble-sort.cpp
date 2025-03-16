// bubble-sort.cpp
// sorts a list with bubble sort

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int arr_len);
void readArray(int arr[], int arr_len);
void printArray(int arr[], int num_elem);

int main()
{
	int size;
	int arr[100];

	cout << "\n\tEnter the size of the array: ";
	cin >> size;

	readArray(arr, size);
	bubbleSort(arr, size);

}

void readArray(int arr[], int arr_len)
{
	cout << "\n\tEnter " << arr_len << " elements, separated by a space: ";

	for (int i = 0; i < arr_len; i++)
	{
		cin >> arr[i];
	}
}


void bubbleSort(int arr[], int arr_len)
{
	bool changed = false;
	int it_count = 0;

	do
	{
		changed = false;
		for (int i = 0; i < arr_len - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int t = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = t;
				printArray(arr, arr_len);
				changed = true;
			}

			it_count++;
		}
	} while (changed == true);

	cout << "\n\tSorted in " << it_count << " iterations.";
}

void printArray(int arr[], int num_elem)
{
	cout << "\n\t";

	for (int i = 0; i < num_elem; i++)
	{
		cout << arr[i] << " ";
	}
}
