/* 
 * File:   main.cpp
 * Author: Chirstian A. Valdez
 * Created on February 25, 2018, 12:05 PM
 * Purpose:  Military Budget
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns
const float TRLLN=1.0e12f;//Trillion
const float BLLN=1.0e09f; //Billion
const int   PRCNT=100;    //Conversion for percent

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float milBdgt,fedBdgt,pcntMil;

    //Initial Variables
    milBdgt=639.1e09f*BLLN;
    fedBdgt=4.094e12f*TRLLN;
    //Map/Process Inputs to Outputs
    pcntMil=15.61;

    //Display Outputs
    cout<<"Military Budget = $"<<milBdgt/BLLN<<" Billion"<<endl;
    cout<<"Federal Budget = $"<<fedBdgt/TRLLN<<" Trillion"<<endl;
    cout<<"Military Percentage = "<<pcntMil<<"%"<<endl;
    
    //Exit program!
    return 0;
}