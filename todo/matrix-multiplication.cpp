// matrix-multiplication.cpp
// multiply two matrices

#include <iostream>
#include <string>
using namespace std;

const int column_size = 10;

void readMatrix(int a[][column_size], int rows, int columns)
{
    cout << "\n\tEnter the matrix, neo:\n";
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> a[i][j];
        }
    }

}

void printMatrix(const int a[][column_size], int rows, int columns)
{
    cout << "\n\tWelcome to the matrix, neo:\n";
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}


void sumRows(const int a[][column_size], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < columns; j++)
        {
            sum = sum + a[i][j];
        }
        cout << "\n\tRow " << i + 1 << " Sum: " << sum;
    }
    cout << endl;
}

void sumColumns(const int a[][column_size], int rows, int columns)
{
    for (int i = 0; i < columns; i++)
    {
        int sum = 0;
        for (int j = 0; j < rows; j++)
        {
            sum = sum + a[j][i];
        }
        cout << "\n\tColumn " << i + 1 << " Sum: " << sum;
    }
    cout << endl;
}

void multiplyMatrix(const int m1[][column_size], int r1, int c1, const int m2[][column_size], int r2, int c2, int m3[][column_size])
{
    if (c1 != r2 || r1 != c2)
    {
        cout << "\nYou're a failure, try again when you stop sucking." << endl;
    }
    else
    {
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                int sum = 0;
                for (int k = 0; k < c1; k++)
                {
                    sum += m1[i][k] * m2[k][j];
                }
                m3[i][j] = sum;
            }
        }
    }

    printMatrix(m3, r1, c1);
}


int main()
{   
    
    int matrix1[10][10], matrix2[10][10], matrix3[10][10], r1, r2, c1, c2; 
    
    cout << "\n\tEnter the number of rows for matrix1: ";
    cin >> r1;
    cout << "\n\tEnter the number of columns for matrix1: ";
    cin >> c1;
   
    readMatrix(matrix1,r1,c1);
    printMatrix(matrix1,r1,c1);

    cout << "\n\tEnter the number of rows for matrix2: ";
    cin >> r2;
    cout << "\n\tEnter the number of columns for matrix2: ";
    cin >> c2;

    readMatrix(matrix2, r2, c2);
    printMatrix(matrix2, r2, c2);

    multiplyMatrix(matrix1, r1, c1, matrix2, r2, c2, matrix3);

    return 0;
}
