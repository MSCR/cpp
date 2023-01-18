#include "Circle.h"

Circle::Circle()
{
    setType(Type::Circle);
    setRadious(2.0f);
}

void Circle::setRadious(float radius)
{
    this->radious = radious;
}

float Circle::getRadious() const
{
    return radious;
}