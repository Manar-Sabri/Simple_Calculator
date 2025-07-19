// calculatorProj.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "headerFile.h"
using namespace std;

int main()
{
    Calc obj;
    int num;
    do {
        cout << "  Calculator  " << endl;
        cout << "1-sum " << endl;
        cout << "2-subtract   " << endl;
        cout << "3-division " << endl;
        cout << "4-multiplication  " << endl;
        cout << "5-Exist" << endl;
        cout << "enter number for operation you want " << endl;
        cin >> num;
        switch (num)
        {
        case 1:
            obj.Sum();
            break;
        case 2:
            obj.Subtract();
            break;
        case 3:
            obj.division();
            break;
        case 4:
            obj.multiplication();
            break;
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "enter valid operation " << endl;

        }
    } while (num != 5);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
