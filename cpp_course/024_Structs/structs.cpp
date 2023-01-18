#include <iostream>
#include <vector>

using namespace std;

class RECT1
{
    int left;   // Top-left point
    float top;    // coordinate pair
    double right;  // Bottom-right point
    int bottom; // Coordinate pair
};


struct RECT
{
    int left = 0;   // Top-left point
    float top;    // coordinate pair
    double right;  // Bottom-right point
    int bottom; // Coordinate pair

    int myfunc(int x) {return x;}
};

struct ListElement
{
    RECT aRect;         // RECT member of structure
    ListElement* pNext; // Pointer to a list element
};

int main()
{
    RECT* pRect = nullptr;  // Define a pointer to RECT
    RECT aRect = {0,0,1,1}; // Define variable aRect of type RECT
    pRect = &aRect;         // Set pointer to the address of aRect

    aRect.bottom;
    (*pRect).top += 10;
    pRect->top += 10;

    ListElement LE2 = {{1,2,3,4}, nullptr};
    ListElement LE1 = {{5,6,7,8}, &LE2};

    cout << LE1.pNext->aRect.bottom << endl;

    return 0;
}