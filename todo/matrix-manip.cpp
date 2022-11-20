// matrix-manip.cpp
// do stuff to matrices

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


int main()
{   
    
    int matrix[10][10], rows, cols; 
    
    cout << "\n\tEnter the number of rows: ";
    cin >> rows;
    cout << "\n\tEnter the number of columns: ";
    cin >> cols;
   
    readMatrix(matrix,rows,cols);
    printMatrix(matrix,rows,cols);
    sumColumns(matrix, rows, cols);
    sumRows(matrix, rows, cols);

    return 0;
}
