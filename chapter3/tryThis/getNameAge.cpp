// This program output the message "Hello World!" to the monitor
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()  // C++ programs start by executing the function main
{
    // Variable declaration
    string first;
    double age;

    // Prompt
    cout << "Please enter your first name and age:\n";
    cin >> first >> age;     // Read two strings
    age *= 12;
    cout << "Hello " << first << "(" << age << " months)"<<"\n";

    return 0;
}