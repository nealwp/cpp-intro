// common-in-array.cpp
// returns the elements in one array that exist in another

#include <iostream>
using namespace std;


void commonElements(const int arr[], const int arr2[], int n)
{
    int outArr[50];
    int outCount = 0;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr2[j])
            {
                outArr[outCount] = arr2[j];
                outCount++;
            }
        }
    }

    if (outCount > 0)
    {
        cout << "\n\tThe matching elements are: ";
        for (int i = 0; i < outCount; i++)
        {
            cout << outArr[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "There are no matching elements." << endl;
    }
}

int main()
{
    int num_elements = 0;
    int numbers[50];
    int numbers2[50];

    cout << "\n\tEnter the number of elements for each list: ";
    cin >> num_elements;
    cout << "\n\tEnter " << num_elements << " numbers for list1: ";
    for (int i = 0; i < num_elements; i++)
    {
        cin >> numbers[i];
    }
    cout << "\n\tEnter " << num_elements << " numbers for list2: ";
    for (int i = 0; i < num_elements; i++)
    {
        cin >> numbers2[i];
    }

    commonElements(numbers, numbers2, num_elements);
    
    return 0;
}
