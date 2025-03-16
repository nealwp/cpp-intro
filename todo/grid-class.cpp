#include <iostream>
using namespace std;

class Grid
{
private:
	int arrGrid[10][10];

public:

	int element;

	Grid()
	{
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				arrGrid[i][j] = 0;
			}
		}
	}

	int getGridByCoor(int i, int j)
	{
		element = arrGrid[i][j];
		return element;
	}

	void setGridByCoor(int i, int j, int x)
	{
		arrGrid[i][j] = x;
	}

};

int main()
{
	Grid grid1;

	cout << "\n\tElement 3,5 is: " << grid1.getGridByCoor(3, 5) << endl;
	
	cout << "\n\tSetting element 3,5 to 100..." << endl;
	grid1.setGridByCoor(3, 5, 100);
	
	cout << "\n\tElement 3,5 is now: " << grid1.getGridByCoor(3, 5) << endl;

	return 0;
}