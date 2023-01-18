#include <iostream>

using namespace std;

// Funcion Pass by value
int funVal(int x);
// Function using pointers
void funPtr(int* x);
// Function using references
void funRef(int& x);

int add(int x, int y)
{
    return x+y;
}

void add(int x, int y, int* z)
{
    *z = x+y;
}

void print(int res)
{
    cout << "Response: " << res << endl;
}

int myFunc(int x)
{
    int y = 0;
    if(x < 10)
        y = 10;
    else if (x < 20)
        y = 20;
    else
        y = x;
    return y;
}

int main()
{
    int a = 10, b = 20;

    int res = add(a,b);
    print(res);

    res = funVal(a);
    cout << "res: " << res << endl;
    cout << "a: " << a << endl;

    funPtr(&a);
    cout << "a: " << a << endl;

    funRef(a);
    cout << "a: " << a << endl;

    return 0;
}

// Funcion Pass by value
int funVal(int x)
{
    x++;
    return x;
}

// Function using pointers
void funPtr(int* x)
{
    if(x != nullptr)
    {
        ++(*x);
    }
}

// Function using references
void funRef(int& x)
{
    x++;
}