#include "Circle.h"
#include <iostream>

Circle::Circle()
{
    //setType(Type::Circle);
    setRadious(2.0f);
}

void Circle::setRadious(float radious)
{
    this->radious = radious;
}

float Circle::getRadious() const
{
    return radious;
}

void Circle::draw()
{
    std::cout << "Drawing a circle of radious "
              << getRadious() << std::endl;
}

Circle::~Circle()
{
    std::cout << "Deleting circle" << std::endl;
}
