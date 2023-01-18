#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle()
{
    width = 1;
    height = 1;
}

void Rectangle::setWidth(int width)
{
    this->width = width;
}

int Rectangle::getWidth() const
{
    return width;
}

void Rectangle::setHeight(int height)
{
    this->height = height;
}

int Rectangle::getHeight() const
{
    return height;
}

void Rectangle::draw()
{
    std::cout   << "Drawing a rectangle of width " << getWidth()
                << " and height " << getWidth() << std::endl;
}

Rectangle::~Rectangle()
{
    std::cout << "Deleting rectangle" << std::endl;
}
