#include "Rectangle.h"

Rectangle::Rectangle()
{
    setType(Type::Rectangle);
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