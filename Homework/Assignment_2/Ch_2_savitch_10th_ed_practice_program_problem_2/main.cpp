/* 
 * File:   main.cpp
 * Author: Christian Valdez
 * Created on March 12, 2018, 1:20 PM
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

int n, count(10);
double answer_n, guess, r;


cout << "This program will compute the square root\n";
cout << "of a number using the Babylonian algorithm.\n";
cout << "Please enter a whole number and press the return key:\n";
cin >> n;
cout << "Please enter a 'guess' number to divide by:\n";
cin >> guess;

r = n/guess;
guess = (guess + r)/2;

while (count > 0)
{
r = n/guess;
guess = (guess + r)/2;

if (guess <= (guess * 0.01) + guess)
answer_n = guess;
else
r = n/guess;
guess = (guess + r)/2;

count-=1;
}


cout << "The sqaure root of "<< n << " is " << answer_n;
cout << endl;


return 0;

}