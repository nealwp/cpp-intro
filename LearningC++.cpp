
#include <iostream>
#include <string>
#include "cppintro.h"
using namespace std;

int main()
{   
    int input;
    bool exit = false;

    while (!exit) {

        cout << "Choose an option:\n";
        cout << "\t1) Estimate Euler's Number\n";
        cout << "\t2) Approximate E to power of X\n";
        cout << "\t3) Tip Calculator\n";
        cout << "\t4) Test if Palindrome\n";
        cout << "\t5) Temperature Conversion\n";
        cout << "\t6) Radius of an Ellipse\n";
        cout << "\t7) Sum an Integer\n";
        cout << "\t8) Days In Year\n";
        cout << "\t0) Quit\n";

        cout << "\nOption: ";
        cin >> input;

        switch (input) {
            case 1: estimate_e(); break;
            case 2: approx_e_to_pow_x(); break;
            case 3: tip_calculator(); break;
            case 4: test_palindrome(); break;
            case 5: temperature_conversion(); break;
            case 6: ellipse_radius(); break;
            case 7: sum_integer(); break;
            case 8: days_in_year(); break;
            case 0: exit = true; break;
        }
    }
}

