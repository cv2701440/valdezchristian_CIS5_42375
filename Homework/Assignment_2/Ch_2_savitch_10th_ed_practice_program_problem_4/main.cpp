/* 
 * File:   main.cpp
 * Author: Christian Valdez
 * Created on March 10, 2018, 10:20 PM
 * Purpose:  Create a CSC/CIS 5 Template
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    string instructor, your_name, food, number, adjective, color, animal;
    cout << "Welcome.\n";
    cout << "Lets Play a game of Mad Lib.\n";
    cout << "After each answer push enter.\n";
    cout << "Enter the first or last name of your instuctor.\n";
    cin >> instructor;
    cout << "Enter your name.\n";
    cin >> your_name;
    cout << "Enter a food.\n";
    cin >> food;
    cout << "Enter a number between 100 and 120.\n";
    cin >> number;
    cout << "Enter an adjective.\n";
    cin >> adjective;
    cout << "Enter a color.\n";
    cin >> color;
    cout << "Enter an animal.\n";
    cin >> animal;
    cout << "Dear instuctor " << instructor << endl;
    cout << "I am sorry that I am unable to turn in my homework at this time. First,\n";
    cout << "I ate a rotten " << food << " which made me turn " << color << " and extremely ill. I\n";
    cout << "came down with a fever of " << number << ". Next, my " << adjective << " pet\n";
    cout << animal << " must have smelled the remains of the " << food << " on my homework,\n";
    cout << "because he ate it. I am currently rewriting my homework and hope you\n";
    cout << "will accept it late.\n";
    cout << "Sincerly, " << your_name << endl;
    return 0;
}