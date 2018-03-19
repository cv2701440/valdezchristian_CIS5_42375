/* 
 * File:   main.cpp
 * Author: Christian Valdez
 * Created on March 10, 2018, 5:10 PM
 * Purpose:  Create a CSC/CIS 5 Template
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    double mph = 6.5;
    double min_per_mile = (1/mph) * 60;
    int min = min_per_mile;
    double sec = (min_per_mile - min) * 60;
    cout << "Your pace is "<< min << " minutes and " << sec << " seconds per mile." << endl;

    return 0;
}