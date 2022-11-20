// is-array-sorted.cpp
// checks if an array is sorted

#include <iostream>
using namespace std;

void readArray(int arr[], int num_elem);
bool checkSorted(int arr[], int num_elem);

int main()
{
    int arr[50];
    int num_elem;

    cout << "\n\tEnter the number of elements you have: ";
    cin >> num_elem;

    readArray(arr, num_elem);
    
    if (checkSorted(arr, num_elem))
    {
        cout << "\n\tList is sorted." << endl;
    }
    else
    {
        cout << "\n\tList is not sorted." << endl;
    }
    
    return 0;
}

void readArray(int arr[], int num_elem)
{
    cout << "\n\tEnter " << num_elem << " elements, separated by a space: ";

    for (int i = 0; i < num_elem; i++)
    {
        cin >> arr[i];
    }
}

bool checkSorted(int arr[], int num_elem)
{
    bool isSorted = true;
    
    for (int i = 0; i < num_elem - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            isSorted = false;
            break;
        }
    }

    return isSorted;
}