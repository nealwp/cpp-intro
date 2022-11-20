// isPrime-in-array.cpp
// counts primes in an array

#include <iostream>
using namespace std;

bool isPrime(int n);
int countPrimes(int arr[], int elem);

int main()
{
	int n = 1;
	int oddArray[100];
	int numOfPrimes;

	cout << "\n\tCreating array of 100 odd numbers...\n" << endl;
	
	for (int i = 0; i < 100; i++)
	{
		oddArray[i] = n;
		n = n + 2;
	}

	for (int i = 0; i < 100; i++)
	{
		cout << oddArray[i] << " ";
	}

	numOfPrimes = countPrimes(oddArray, 100);

	cout << "\n\n\t" << "There are " << numOfPrimes << " prime numbers in the array." << endl;
	
	return 0;
}

bool isPrime(int n)
{
	bool prime = true;

	for (int div = 2; div <= n / 2; div++)
	{
		if (n % div == 0)
		{
			prime = false;
			break;
		}
	}
	return prime;
}

int countPrimes(int arr[], int elem)
{
	int primeCount = 0;

	for (int i = 0; i < elem; i++)
	{
		if (isPrime(arr[i]))
		{
			primeCount++;
		}
	}
	return primeCount;
}
