#include "base.h"
#include <iostream>

Base::Base()
{
    member = "Charnging protected member from base";
    std::cout << member << std::endl;
}

Base::~Base()
{
    std::cout << "Deleting protected member from base" << std::endl;
}