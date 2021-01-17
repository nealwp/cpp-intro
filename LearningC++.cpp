
#include <iostream>
#include <string>
#include "cppintro.h"
using namespace std;

int main()
{   
    int input;
    bool exit = false;

    while (!exit) {

        cout << "\n\nChoose an option:\n\n";
        cout << "\t1) Estimate Euler's Number\t10) Odd Pyramid\t\t\t19) Find in Integer\n";
        cout << "\t2) Approximate E to power of X\t11) Find Primes in Range\t20) Solve Linear Equation\n";
        cout << "\t3) Tip Calculator\t\t12) Squares and Cubes Table\t21) Triangle Matrix\n";
        cout << "\t4) Test if Palindrome\t\t13) Reverse a Number\t\t22) Sum, Average, Above Average\n";
        cout << "\t5) Temperature Conversion\t14) Print Square\t\t23) Order of Operations\n";
        cout << "\t6) Radius of an Ellipse\t\t15) Area of Polygon\t\t24) Common in Arrays\n";
        cout << "\t7) Sum an Integer\t\t16) Count in String\t\t25) Minimum in Array\n";
        cout << "\t8) Days In Year\t\t\t17) Fibonacci\n";
        cout << "\t9) Diamond Shape\t\t18) Triangle Perimeter\n";
        cout << "\n\t0) Quit\n";

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
            case 15: area_of_polygon(); break;
            case 16: count_in_string(); break;
            case 17: fibonacciThis(); break;
            case 18: triangle_perimeter(); break;
            case 19: searchAnElement(); break;
            case 20: solve_linear_equation(); break;
            case 21: triangle_matrix(); break;
            case 22: sum_average_above_avg(); break;
            case 23: orderOfOperations(); break;
            case 24: commonElements(); break;
            case 25: minInArray(); break;
            case 0: exit = true; break;
        }
    }
}

