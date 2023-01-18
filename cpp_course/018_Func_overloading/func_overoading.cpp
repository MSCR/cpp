#include <iostream>
#include <string>

using namespace std;

void printParams    (const int a)                   { cout << a << endl; }
void printParams    (const int a, const int b)      { cout << a << ' ' << b << endl; }
void printParams    (const char a, char b = 'b')    { cout << a << ' ' << b << endl; }
//void printParams    (const char a)                  { cout << a << endl; }
void printParams    (string a)                      { cout << a << endl;}

int main()
{
    printParams(1);
    printParams(1,3);
    printParams('a');
    printParams("a");

    return 0;
}