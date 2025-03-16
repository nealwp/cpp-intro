// triangle-matrix.cpp
// takes a number of rows and columns from user and prints a matrix of triangle shapes

#include <iostream>
#include <string>
using namespace std;

void triShape(int col);
void triArray(int row, int col);

int main()
{
	int rows;
	int columns;
	
	cout << "\n\tEnter the number of rows: ";
	cin >> rows;
	cout << "\n\tEnter the number of columns: ";
	cin >> columns;

	cout << endl;

	triArray(rows, columns);

	return 0;
}

void triShape(int col)
{
	char star = '*';
	char space = ' ';
	int  triWidth = 5;

	int spcnum = triWidth / 2;

	for (int i = 1; i < triWidth + 2; i += 2)
	{

		string strline = string(i, star);
		string spcline = string(spcnum--, space);

		for (int j = 0; j < col; j++)
		{
			cout << spcline << strline << spcline;
		}

		cout << endl;

	}
}

void triArray(int row, int col)
{
	for (int j = 0; j < row; j++)
	{
		triShape(col);
	}
}


