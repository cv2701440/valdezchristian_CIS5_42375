/* 
 * File:   main.cpp
 * Author: Christian Valdez
 * Created on March 3, 2018, 1:20 PM
 * Purpose:  Create a C++ Program
 */
#include <iostream>
using namespace std;
int main(int argc, char** argv) {

    int quarters, dimes, nickels;
    cout << "Enter Number of Quarters.\n";
    cin >> quarters;
    cout << "Enter Number of dimes.\n";
    cin >> dimes;
    cout << "Enter number of nickels.\n";
    cin >> nickels;
    int total;
    total = (quarters * 25) + (dimes * 10) + (nickels * 5);
    cout << "This is the total of " << total << " cents";
    return 0;
}