// linear-search.cpp

#include <iostream>
#include <algorithm>
using namespace std;

template <typename myType>

void linearSearch(myType* arr, myType searchVal, int n)
{
	bool found = false;
	int i = 0;
	
	while (found == false && i < n)
	{
		if (arr[i] == searchVal)
		{
			found = true;
			break;
		}
		
		i++;
	}

	if (found)
	{
		cout << "\n\t" << searchVal << " found at array element " << i << "!" << endl;
	}
	else
	{
		cout << "\n\t" << searchVal << " not found. Ended at element " << i << endl;
	}
}


int main()
{
	const int arr_len = 5;
	
	int int_arr[arr_len] = { 10, 20, 30, 40, 15 };
	string str_arr[arr_len] = {"hello", "this", "is", "a super", "test"};
	char char_arr[arr_len] = {'j', 'T', 'L', 'u', 'x'};

	int i_search = 30;
	string s_search = "hello";
	char c_search = 'x';

	int* iptr = int_arr;
	string* sptr = str_arr;
	char* cptr = char_arr;

	linearSearch(int_arr, i_search, arr_len);
	linearSearch(str_arr, s_search, arr_len);
	linearSearch(char_arr, c_search, arr_len);

	return 0;
}