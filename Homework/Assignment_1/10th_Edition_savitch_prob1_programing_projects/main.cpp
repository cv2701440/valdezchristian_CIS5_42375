/* 
 * File:   main.cpp
 * Author: Christian Valdez
 * Created on March 3, 2018, 1:20 PM
 * Purpose:  Create a C++ project
 */

//System Libraries
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    int a, b;
    cout << "This program adds 2 numbers together and gives you the answer.\n";
    cout << "Type your first number.\n";
    cin >> a;
    cout << "Type another number to add to the first.\n";
    cin >> b;
    int total;
    total = a + b;
    cout << a << " + " << b << " = " <<total;
    return 0;
}