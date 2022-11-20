// sum-average-above-avg.cpp
// returns sum, average and total above average for a set of numbers

	#include <iostream>
	using namespace std;

	int main()
{
		int numbers[4];
		int sum, abv_avg=0;
		double average;


		cout << "Enter a value: ";
		cin >> numbers[0];

		for (int i = 1; i < 4; i++)
		{
			cout << "Enter the next value: ";
			cin >> numbers[i];
		}
		
		sum = numbers[0] + numbers[1] + numbers[2] + numbers[3];
		average = double(sum) / 4;

		for (int i = 0; i < 5; i++)
		{
			if (numbers[i] > average)
			{
				abv_avg++;
			}
		}

		cout << "			Sum: " << sum << endl;
		cout << "		Average: " << average << endl;
		cout << " Above Average: " << abv_avg << endl;

		return 0;
}