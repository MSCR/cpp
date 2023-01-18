#include "Shape.h"
#include <iostream>

void Shape::draw()
{
    std::cout << "Drawing shape: " << std::endl;
}

Shape::~Shape()
{
    std::cout << "Deleting base" << std::endl;
}