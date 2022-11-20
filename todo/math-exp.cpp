// math-exp.cpp
// takes input from the user to calculate a mathematical expression

	#include <iostream>
	using namespace std;

	int main()
{
		double a, b, c, d, r;
		char var_arr[5] = {'a', 'b', 'c', 'd', 'r'};
		double num_arr[5] = {};

		for (int i = 0; i < 5; i++)
		{
			cout << "Enter the value of " << var_arr[i] << ": ";
			cin >> num_arr[i];
		}
		
		 a = num_arr[0];
		 b = num_arr[1];
		 c = num_arr[2];
		 d = num_arr[3];
		 r = num_arr[4];
		
		// math expression = (4 / (3 * (r + 34))) - (9 * (a + (b * c))) + ((3 + (d * (2 + a))) / (a + (b * d))) 

		double output = (4 / (3 * (r + 34))) - (9 * (a + (b * c))) + ((3 + (d * (2 + a))) / (a + (b * d)));

		cout << "The result of the expression is: " << output;

		return 0;
}