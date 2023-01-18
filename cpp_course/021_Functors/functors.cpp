#include <iostream>

using namespace std;

struct MyStruct
{
    void operator()(void)   { cout << "No parameters" << endl; }
    void operator()(int a)  { cout << "One parameter: " << a << endl;}
    int operator+(int x)    { return ++x;}
};

int main()
{
    MyStruct x;
    x();
    x(35);
    int y = x+5;
    cout << y << endl;
    return 0;
}