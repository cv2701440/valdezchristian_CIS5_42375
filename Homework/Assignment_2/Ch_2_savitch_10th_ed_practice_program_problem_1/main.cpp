/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on February 13, 2018, 1:20 PM
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
    int ounces_cereal;
    char ans;
    cout << "Welcome.\n";
    cout << "This program calculates the amount of cereal in metric tons\n";
    cout << "as well as the number of cereal boxes you would need to equal a ton.\n";
    do
    {
    cout << "How much does your cereal box weigh in ounces?\n";
    cin >> ounces_cereal;
    double metric_ton;
    metric_ton = ounces_cereal / 35273.92;
    cout << metric_ton << " tons.\n";
    double metric_ton_boxes;
    metric_ton_boxes = 35273.92 / ounces_cereal;
    cout << "You would need " << metric_ton_boxes << " cereal boxes to equal a ton.\n";
    cout << "Do you want to calculate another box of cereal?\n";
    cout << "Press y for yes, or press n for no.\n";
    cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    cout << "Goodbye.\n";
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}