#include <iostream>
#include <list>
#include "Rectangle.h"
#include "Circle.h"

void drawShape(Shape* shape);
void drawShapes(const std::list<Shape*>& shapes);

int main()
{
    Circle* circle = new Circle();
    Rectangle* rectangle = new Rectangle();
    Circle* anotherCircle = new Circle();

    anotherCircle->setRadious(58.22f);

    std::list<Shape*> shapes{circle, rectangle, anotherCircle};
    drawShapes(shapes);

    return 0;
}

void drawShape(Shape* shape)
{
    /**
     *  Suppose that exist the following
     *  derivated classes from Shape:
     *      - Triangle
     *      - Circle
     * 
     *  How to determine what derivated
     *  class is pointing shape?
    */
   Type type = shape->getType();
   
   if(type == Type::Rectangle)
   {
        const Rectangle* rectangle = static_cast<const Rectangle*>(shape);
        std::cout   << "Drawing a rectangle of width " << rectangle->getWidth()
                    << " and height " << rectangle->getWidth() << std::endl;
   } else if (type == Type::Circle)
   {
        const Circle* circle = static_cast<const Circle*>(shape);
        std::cout << "Drawing a circle of radius";
   }else
   {
        std::cout << "Unknown shape" << std::endl;
   }
}

void drawShapes(const std::list<Shape*>& shapes)
{
    for(auto shape:shapes)
    {
        drawShape(shape);
        std::cout << std::endl;
    }
}