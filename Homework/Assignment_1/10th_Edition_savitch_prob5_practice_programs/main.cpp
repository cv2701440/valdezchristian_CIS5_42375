/* 
 * File:   main.cpp
 * Author: Christian Valdez
 * Created on March 3, 2018, 1:20 PM
 * Purpose:  Create a C++ Program
 */
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    int width, height;
    cout << "Press return after entering a number.\n";
    cout << "This program calculates the total amount of fence you would need to\n";
    cout << "make a rectangular area of the fence.\n";
    cout << "Enter the width of the fence in feet:\n";
    cin >> width;
    cout << "Enter the height of the fence in feet:\n";
    cin >> height;
    int totallength;
    totallength = width * height;
    cout << "If you have ";
    cout << width;
    cout << " feet of fence in width.\n";
    cout << "and ";
    cout << height;
    cout << " feet in height, then\n";
    cout << "you have ";
    cout << totallength;
    cout << " feet is the total amount of fence you would need.\n";
    return 0;
}