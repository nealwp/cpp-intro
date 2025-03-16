// triangle-perimeter.cpp
// computes the perimeter of a valid triangle

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int edge1, edge2, edge3, perimeter;

	cout << "Triangle edge 1 is: ";
	cin >> edge1;
	cout << endl << "Triangle edge 2 is: ";
	cin >> edge2;
	cout << endl << "Triangle edge 3 is: ";
	cin >> edge3;

	if (edge1 + edge2 > edge3&& edge1 + edge3 > edge2&& edge2 + edge3 > edge1)
	{
		perimeter = edge1 + edge2 + edge3;
		cout << "The perimeter is " << perimeter;
	}
	else
	{
		cout << endl << "Input is invalid!";
	}

	return 0;
}