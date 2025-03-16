// explore-matrix.cpp
// search a matrix for matching rows/columns/diagonals

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int column_size = 10;

void exploreMatrix(const int m1[][column_size], int r1, int c1);
void printMatrix(const int a[][column_size], int rows, int columns);
void binaryMatrix(int m1[][column_size], int r1, int c1);

int main()
{
    // random seed via time
    srand(time(NULL));

    int matrix[10][10], r1, c1;

    cout << "\n\tEnter the size for the matrices: ";
    cin >> r1;
    cout << "\n\tEnter the number of columns for the matrices: ";
    cin >> c1;

    int runCount = 0;

    while (runCount < 4)
    {
        binaryMatrix(matrix, r1, c1);
        exploreMatrix(matrix, r1, c1);
        runCount++;
    }

    return 0;
}


void exploreMatrix(const int m1[][column_size], int r1, int c1)
{    
    int matchCount = 0;
    int totalMatchCount = 0;

    // horizontal match check
    for (int i = 0; i < r1; i++)
    {
        // at the start of each row, set match count to zero
        matchCount = 0;

        // hold the row number static while incrementing across columns
        for (int j = 0; j < c1; j++)
        { 
            // check if current row/current col matches current row/next col
            if (m1[i][j] == m1[i][j + 1]) 
            { 
                matchCount++; 
            }
            else 
            { 
                break; 
            }

            // if all columns in row match, print
            if (matchCount == c1 - 1)
            {
                cout << "\tAll " << m1[i][j] << "'s on row " << i << endl;
                totalMatchCount++;
            }
        }
    }

    if (totalMatchCount == 0) 
    {
        cout << "\tNo row matches found." << endl;
    }
    else 
    { 
        totalMatchCount = 0;
    }

    // vertical match check
    for (int i = 0; i < c1; i++)
    {
        // set match count to zero at the start of each column
        matchCount = 0;

        //hold column number static while incrementing through rows
        for (int j = 0; j < r1; j++)
        {
            // check if current row/current col matches next row/current col
            if (m1[j][i] == m1[j + 1][i]) 
            { 
                matchCount++;
            }
            else 
            {
                break;
            }

            // if all rows in column match, print
            if (matchCount == r1 - 1)
            {
                cout << "\tAll " << m1[j][i] << "'s on column " << i << endl;
                totalMatchCount++;
            }
        }
    }

    if (totalMatchCount == 0)
    {
        cout << "\tNo column matches found." << endl;
    }
    else
    {
        totalMatchCount = 0;
    }

    // top-to-bottom diagonal match check    
    matchCount = 0;
    for (int i = 1, j = 1; i < r1; i++, j++)
    {
        // start at top right corner and compare right-and-down
        if (m1[0][0] == m1[i][j])
        {
            matchCount++;
        }
        else
        {
            break;
        }
    }
    
    if (matchCount == c1 - 1)
    {
        cout << "\tAll " << m1[0][0] << "'s on downward diagonal." << endl;
    }
    else
    {
        cout << "\tNo downward diagonal matches." << endl;
    }

    // bottom-to-top diagonal match check    
    matchCount = 0;
    for (int i = r1 - 2, j = 1; j < c1; i--, j++)
    {
        // start at bottom left corner and compare right-and-up
        if (m1[r1-1][0] == m1[i][j]) 
        {
            matchCount++;
        }
        else
        {
            break;
        }
    }

    if (matchCount == c1 - 1)
    {
        cout << "\tAll " << m1[r1-1][0] << "'s on upward diagonal." << endl;
    }
    else 
    {
        cout << "\tNo upward diagonal matches." << endl;
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

void binaryMatrix(int m1[][column_size], int r1, int c1)
{
 //creates a matrix of n size populated with random zeroes and ones

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            m1[i][j] = (rand() % 2);
        }
    }

    printMatrix(m1, r1, c1);

}


