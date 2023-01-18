#include "derivated.h"
#include <iostream>

Derivated::Derivated()
{
    member  = "Changing protected member from derivated";
    std::cout << member << std::endl;
}

Derivated::~Derivated()
{
    std::cout << "Deleting protected member from derivated" << std::endl;
}