// sum-matrix-columns.cpp
// returns the sum of each column in a matrix

#include <iostream>
using namespace std;

const int SIZE = 4;

void readMatrix(double a[][SIZE], int rows = 3, int columns = SIZE)
{
    cout << "\n\tEnter a 3-by-4 matrix row by row:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> a[i][j];
        }
    }

}

double sumColumn(const double a[][SIZE], int rowSize, int columnIndex = SIZE)
{
    for (int i = 0; i < columnIndex; i++)
    {
        double sum = 0;
        for (int j = 0; j < rowSize; j++)
        {
            sum = sum + a[j][i];
        }
        cout << "\n\tSum of the elements at column " << i << " is: " << sum;
    }
    cout << endl;

    return 0;
}


int main()
{
    const int rows = 3;
    double matrix[rows][SIZE];

    readMatrix(matrix);
    sumColumn(matrix, rows);

    return 0;
}
