// grade-a-class-from-best-score.cpp
// gives letter grades relative to best student score

#include <iostream>
using namespace std;

/* int* sortArray(int arr[], int len)
{
    int temp;
    int min = arr[0];

    for (int i = 1; i < len; i++)
    {
        if (arr[i] < min)
        {
            temp = arr[0];
            arr[0] = arr[i];
            arr[i] = temp;
            min = arr[0];
            i = 0;
        }
        
        if (arr[i] > arr[len-1])
        {
            temp = arr[len-1];
            arr[len-1] = arr[i];
            arr[i] = temp;
            i = 0;
        }

        else if (arr[i] < arr[i-1])
        {
            temp = arr[i -1];
            arr[i-1] = arr[i];
            arr[i] = temp;
            i = 0;
        }

    }

    return arr;
}
*/


int arrayMax(int arr[], int len)
{
    int max = arr[0];
    
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}


void gradeMyClass(int arr[], int n)
{
    //int* arr_sorted;
    int best_grade;
    //arr_sorted = sortArray(arr, n);
    best_grade = arrayMax(arr, n);
    char letterGrade = 'F';

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= best_grade - 10)
        {
            letterGrade = 'A';
        }
        else if (arr[i] >= best_grade - 20)
        {
            letterGrade = 'B';
        }
        else if (arr[i] >= best_grade - 30)
        {
            letterGrade = 'C';
        }
        else if (arr[i] >= best_grade - 40)
        {
            letterGrade = 'D';
        }
        else
        {
            letterGrade = 'F';
        }

        cout << "\n\tStudent " << i << " score is " << arr[i] << " and grade is " << letterGrade << "." << endl;
    }

}


int main()
{
    int num_student = 1;
    int scores[50];

    cout << "\n\tEnter the number of students: ";
    cin >> num_student;
    cout << "\n\tEnter " << num_student << " test scores: ";
    for (int i = 0; i < num_student; i++)
    {
        cin >> scores[i];
    }

    cout << endl;

    gradeMyClass(scores, num_student);

    cout << endl;

    return 0;
}
