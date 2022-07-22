// This program output the message "Hello World!" to the monitor
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()  // C++ programs start by executing the function main
{
    double d = 0;
    while(cin >> d)
    {
        int i = d;
        char c = i;
        int i2 = c;
        cout << "d == " << d << "\n"
            << "i == " << i << "\n"
            << "i2 == " << i2 << "\n"
            << "char(" << c << ")\n";
    }
    return 0;
}