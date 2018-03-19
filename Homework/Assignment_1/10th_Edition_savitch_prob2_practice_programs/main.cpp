/* 
 * File:   main.cpp
 * Author: Christian Valdez
 * Created on March 3, 2018, 1:20 PM
 * Purpose:  Create a C++ Program
 */
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    int NumberOfPods, peasPerPod, totalPeas;
    cout << "Hello\n";
    cout << "Press return after entering a number.\n";
    cout << "Enter the numeber of pods:\n";
    cin >> NumberOfPods;
    cout << "Enter the number of peas in a pod:\n";
    cin >> peasPerPod;
    totalPeas = NumberOfPods * peasPerPod;
    cout << "If you have ";
    cout << NumberOfPods;
    cout << " pea pods\n";
    cout << "and ";
    cout << peasPerPod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << totalPeas;
    cout << " peas in all the pods.\n";
    cout << "Goodbye\n";
    return 0;
}