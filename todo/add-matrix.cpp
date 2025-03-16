// add-matrices.cpp
// add two matrices together

#include <iostream>
#include <string>
using namespace std;

const int column_size = 10;

void readMatrix(int a[][column_size], int rows, int columns)
{
    cout << "\n\tEnter the matrix, row by row:\n";

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
    cout << "\n\tMatrix print:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}


void sumMatrix(const int m1[][column_size], int r1, int c1, const int m2[][column_size], int m3[][column_size])
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            int sum = 0;
            sum = m1[i][j] + m2[i][j];
            m3[i][j] = sum;
        }
    }

    printMatrix(m3, r1, c1);
}


int main()
{

    int matrix1[10][10], matrix2[10][10], matrix3[10][10], r1, c1;

    cout << "\n\tEnter the number of rows for the matrices: ";
    cin >> r1;
    cout << "\n\tEnter the number of columns for the matrices: ";
    cin >> c1;

    readMatrix(matrix1, r1, c1);
    readMatrix(matrix2, r1, c1);

    sumMatrix(matrix1, r1, c1, matrix2, matrix3);

    return 0;
}