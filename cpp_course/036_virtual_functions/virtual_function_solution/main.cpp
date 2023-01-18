#include <iostream>
#include <list>
#include "Rectangle.h"
#include "Circle.h"

void drawShapes(const std::list<Shape*>& shapes);

int main()
{
    //Shape* myShape = new Shape();
    Circle* circle = new Circle();
    Rectangle* rectangle = new Rectangle();
    Circle* anotherCircle = new Circle();

    anotherCircle->setRadious(58.22f);

    std::list<Shape*> shapes{circle, rectangle, anotherCircle};
    drawShapes(shapes);
    std::cout << std::endl;

    delete circle;
    std::cout << std::endl;

    delete rectangle;
    std::cout << std::endl;

    delete anotherCircle;
    std::cout << std::endl;

    return 0;
}

void drawShapes(const std::list<Shape*>& shapes)
{
    for(auto shape:shapes)
    {
        shape->draw();
        std::cout << std::endl;
    }
}