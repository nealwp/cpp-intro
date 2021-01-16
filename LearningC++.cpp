
#include <iostream>
#include <string>
#include "cppintro.h"
using namespace std;

int main()
{   
    int input;
    bool exit = false;

    while (!exit) {

        cout << "\n\nChoose an option:\n";
        cout << "\t1) Estimate Euler's Number\t10) Odd Pyramid\n";
        cout << "\t2) Approximate E to power of X\t11) Find Primes in Range\n";
        cout << "\t3) Tip Calculator\t\t12) Squares and Cubes Table\n";
        cout << "\t4) Test if Palindrome\t\t13) Reverse a Number\n";
        cout << "\t5) Temperature Conversion\t14) Print Square\n";
        cout << "\t6) Radius of an Ellipse\n";
        cout << "\t7) Sum an Integer\n";
        cout << "\t8) Days In Year\n";
        cout << "\t9) Diamond Shape\n";
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
            case 9: print_diamond_shape(); break;
            case 10: oddPyramid(); break;
            case 11: find_primes_in_range(); break;
            case 12: squares_and_cubes(); break;
            case 13: reverse_number(); break;
            case 14: squareOfAsterisks(); break;
            case 0: exit = true; break;
        }
    }
}

