// check-four-in-a-row-pattern.cpp
// detects four-in-a-row integer matches

#include <iostream>
using namespace std;


bool isConsecutiveFour(const int arr[], int n)
{
    bool isConsec = false;
    int consecCount = 0;

    for (int i = 0, j = 1; i < n, j < n - 1; i++, j++)
    {
        if (arr[i] == arr[j] && consecCount != 3)
        {
            consecCount++;
        }
        else if (consecCount == 3)
        {
            isConsec = true;
            break;
        }
    }

    return isConsec;
}

int main()
{
    int num_elements = 0;
    int numbers[50];

    cout << "\n\tEnter the number of elements: ";
    cin >> num_elements;
    cout << "\n\tEnter " << num_elements << " numbers: ";
    for (int i = 0; i < num_elements; i++)
    {
        cin >> numbers[i];
    }

    cout << endl;

    if (isConsecutiveFour(numbers, num_elements))
    {
        cout << "This list has consecutive fours." << endl;
    }
    else
    {
        cout << "This list has no consecutive fours." << endl;
    }
    
    return 0;
}
