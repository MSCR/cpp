#include <iostream>

using namespace std;

int main(int argc, char** argv)
{

    char c = 'a';
    cout << "c: " << c << endl;
    int  n = c;
    cout << "n: " << n << endl;
    c = n;
    cout << "c: " << c << endl << endl;
    
    // Value truncate
    n = 255;
    cout << "n: " << n << endl;
    c = n;
    cout << "c: " << c << endl;
    n = c;
    cout << "n: " << n << endl << endl;
    cout << "Char: " << sizeof(char) << endl;
    cout << "Int: " << sizeof(int) << endl << endl;

    bool b = true;
    cout << "Bool: " << sizeof(bool) << endl << endl;
    cout << "float: " << sizeof(float) << endl << endl;
    cout << "double: " << sizeof(double) << endl << endl;

    uint8_t x = 5;
    uint16_t y = 256;
    cout << "x size: " << sizeof(x) << endl;
    cout << "y size: " << sizeof(y) << endl;

    constexpr float pi = 3.1416;
    cout << "pi: " << pi << endl;

    constexpr float z = 3*pi;
    cout << "z: " << z << endl;

    const float arguments = argc;
    cout << "arguments: " <<  argc << endl; 

    //constexpr float arguments = argc;
    //cout << "arguments: " <<  argc << endl; 

    return 0;

}