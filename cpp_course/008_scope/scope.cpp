#include <iostream>

using namespace std;

#define HW_VARIANT_4G
constexpr float pi = 3.1416;

#ifdef HW_VARIANT_4G
    bool ada = true;
#else
    bool ada = false;
#endif

// Global Variables
int a = 10;

namespace ada
{
    int control = 1;

    void increaseControl()
    {
        control++;
        cout << control << endl;
    }
}

namespace sdb
{
    int control = 10;

    void increaseControl()
    {
        control++;
        cout << control << endl;
    }    
}

int fun(int x)
{
    static int y = 0;
    y++;

    int b = 10; // b is spawned here
    if(10 < x)
    {
        char c = 20;    // c is spawned here
        x += c;
    }   // c dies here

    {
        int d = 0x11;    // d is spawned here
        x -=d;
    }   // d dies here

    return (x+y);
}

int main()
{
    // Automatic store duration
    // - Stack
    // - Heap
    // Local variables
    int b = a - 1;
    {
        int z = b + a;
    }

    cout << fun(b) << endl;
    cout << fun(b) << endl;
    cout << fun(b) << endl;
    cout << fun(b) << endl;

    ada::increaseControl();
    sdb::increaseControl();

    return 0;
}