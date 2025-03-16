// min-in-array.cpp
// finds the smallest element in an user input array

#include <iostream>
using namespace std;

void readArray(int arr[], int num_elem);
void arrayMin(int arr[], int num_elem);

int main()
{
    int arr[50];
    int num_elem;

    cout << "\n\tEnter the number of elements you have: ";
    cin >> num_elem;

    readArray(arr, num_elem);
    arrayMin(arr, num_elem);

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

void arrayMin(int arr[], int num_elem)
{
    int arrMin = arr[0];
    
    for (int i = 0; i < num_elem; i++)
    {
        if (arrMin > arr[i])
        {
            arrMin = arr[i];
        }
    }

    cout << "\n\tThe smallest element in the array is: " << arrMin << endl;
}