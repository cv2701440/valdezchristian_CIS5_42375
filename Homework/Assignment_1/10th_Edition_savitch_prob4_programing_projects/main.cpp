/* 
 * File:   main.cpp
 * Author: Christian Valdez
 * Created on March 3, 2018, 1:20 PM
 * Purpose:  Create a C++ Program
 */
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    int acceleration, time;
    acceleration = 32;
    cout << "Enter the Number of seconds to show how far an object will fall.\n";
    cin >> time;
    int distance;
    distance = (acceleration * (time * time)) / 2;
    cout << "The object will fall " << distance <<" feet";
    return 0;
}