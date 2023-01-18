#include <iostream>

using namespace std;

int fun(int* ptr);

int main()
{
    // Implicit cast
    auto x = 10 + 1.5l;
    auto y = 10 + 4.5;
    auto z = 10 + 10.5f;
    auto i = 'a' + 5;
    auto j = 5ul + 10;
    auto h = 1l + 5u;

    // Explicit cast
    // static_cast
    float f = 3.5;
    int a = f;
    double b = static_cast<double>(f);
    cout << b << endl;

    //int a = 10;

    char c = 'a';
    int* q = (int*) &c;     // old style or C style cast
    

    //int* p = static_cast<int*>(&c);

    // const_cast
    const int val = 10;
    const int* ptr = &val;
    int* ptr1 = const_cast<int *>(ptr);
    int res = fun(const_cast<int *>(ptr));

    // reinterpret_cast
    int* p = reinterpret_cast<int*>(&c);


    return 0;
}

int fun(int* ptr)
{
    return (*ptr +10);
}
