//spinner.cpp

#include <iomanip>
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    cout << "\n";

    while (true)
    {
        cout << setw(6) << setprecision(6) << "\\" << '\r';
        Sleep(85);
        cout << setw(6) << setprecision(6) << "/" << '\r';
        Sleep(85);
        cout << setw(6) << setprecision(6) << "-" << '\r';
        Sleep(85);
    }

    return 0;
}
