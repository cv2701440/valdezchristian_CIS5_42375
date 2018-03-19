/* 
 * File:   main.cpp
 * Author: Christian Valdez
 * Created on March 12th, 2018, 12:05 PM
 * Purpose:  To create a program
 */

//System Libraries
#include <iostream> 
using namespace std;

const float LBTOGRM=454.0f;
const float DAYSYR =365.0f;

int main(int argc, char** argv) {
    float mMouse=35.0f,  
          mKllM=5.0f,    
          mSoda=350.f,   
          sodaCnc=.001f, 
          wtDtr;         
    unsigned int numCans,
            cCnsmd,      
            cnsDay,      
            numYrs;      
      
    cout<<"This program calculates soda can consumption permitted"<<endl;
    cout<<"Input your final desired  weight in lbs after diet soda consumption"<<endl;
    cin>>wtDtr;
    cout<<"Input how many cans you drink per day"<<endl;
    cin>>cnsDay;
    cout<<"Input how many years you have consumed this soda"<<endl;
    cin>>numYrs;
    
    numCans=mKllM*wtDtr*LBTOGRM/(mMouse*mSoda*sodaCnc)-1;
    cCnsmd=cnsDay*DAYSYR*numYrs;

    cout<<"The weight of the dieter after soda consumption = "<<wtDtr<<endl;
    cout<<"Maximum cans of soda allowed to consume = "<<numCans<<endl;
    cout<<"Total cans of soda so far consumed = "<<cCnsmd<<endl;
    cout<<(cCnsmd<numCans?"You Live":"You have expired")<<endl;
    return 0;
}