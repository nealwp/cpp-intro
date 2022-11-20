//is-perfect.cpp
// finds all perfect numbers within a range and displays their factors

#include <iostream>
using namespace std;

int sumArray(int arr[], int len)
{
    int sum = 1;

    for (int i = 1; i < len; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}


bool isPerfect(int num)
{
    bool perfect = false;
    int n = 1;
    int j = 1;
    int arr[100];
    int sum;

    arr[0] = 1;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            arr[j] = i;
            j++;
            n++;
        }
    }

    sum = sumArray(arr, n);

    if (sum == num)
    {
        for (int i = 0; i < n - 1; i++)
        {
            cout << arr[i] << " + ";
        }
        cout << arr[n-1] << " = ";
       
        perfect = true;
    }
    
    return perfect;
}


int main()
{
    int low;
    int high;


    cout << "\n\tEnter the smallest number: ";
    cin >> low;
    cout << "\n\tEnter the largest number: ";
    cin >> high;
    cout << endl;
    
    for (int i = low + 1; i < high; i++)
    {
        if (isPerfect(i))
        {
            cout << i << ". " << i << " is perfect." << endl;
        }
    }

    cout << endl;
    
    return 0;
}
