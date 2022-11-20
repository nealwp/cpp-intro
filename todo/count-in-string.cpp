// count-in-string.cpp
// returns the count of each distinct character is a string

#include <iostream>
#include <string>
using namespace std;

int main()
{   
    string str;
    
    cout << "\n\tEnter a string: ";
    cin >> str;
    cout << endl;

    int count[26];

    for (int i = 0; i < 26; i++)
    {
        count[i] = 0;
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        count[str[i] - 'a'] = count[str[i] - 'a'] + 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            cout << "\t" << char('a' + i) << " occured " << count[i] << " times." << endl;
        }
    }

    return 0;
}
