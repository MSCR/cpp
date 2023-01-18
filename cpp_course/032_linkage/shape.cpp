#include <iostream>
#include "shape.h"

using namespace std;

/*struct Point
{
    int x;
    int y;
};*/

extern int height;
extern int width;


int calculateArea();

int main()
{
    Point location;

    location.x = 0;
    location.y = 0;

    cout << "Point location(" << location.x << "," << location.y << ")" << endl; 

    return 0;
}

void moveTo(Point* p)
{
    /**/
}