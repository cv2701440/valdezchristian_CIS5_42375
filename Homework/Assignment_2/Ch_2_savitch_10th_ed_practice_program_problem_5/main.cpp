/* 
 * File:   main.cpp
 * Author: Christian Valdez
 * Created on March 12, 2018, 1:20 PM
 * Purpose:  Create a program
 */

//System Libraries
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    
    double radius, vm; 
    cout << "Enter radius of a sphere." << endl; 
    cin >> radius;
    vm = (4.0 / 3.0) * 3.1415 * radius * radius * radius;
    cout << " The volume is " << vm << endl;
    
    return 0;
}