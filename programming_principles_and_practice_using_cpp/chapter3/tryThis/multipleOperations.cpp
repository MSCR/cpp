// This program output the message "Hello World!" to the monitor
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main()  // C++ programs start by executing the function main
{
    // Variable declaration
    double n;
    int n2;

    // Prompt
    cout << "Please enter a floating-point value:\n";
    cin >> n;
    cout    << "n == " << n
            << "\nn+1 == " << n+1
            << "\nthree times n == " << n*3
            << "\ntwice n == " << n+n
            << "\nn squared == " << n*n
            << "\nhalf of n == " << n/2
            << "\nsquared root of n == " << sqrt(n)
            << "\n";
    cout << "Please enter a integer value:\n";
    cin >> n2;
    cout    << "n == " << n2
            << "\nn+1 == " << n2+1
            << "\nthree times n == " << n2*3
            << "\ntwice n == " << n2+n2
            << "\nn squared == " << n2*n2
            << "\nhalf of n == " << n2/2
            << "\nmodule 2 of n ==" << n2%2
            << "\nsquared root of n == " << sqrt(n2)
            << "\n";

    return 0;
}