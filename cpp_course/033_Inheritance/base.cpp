#include "base.h"
#include <iostream>

Base::Base()
{
    privateMember = "Private from base";
    // Alternativelly setPrivateMember can be used:
    // setPrivateMember("Private from base");

    protectedMember = "Protected from base";
    publicMember = "Public from base";
}

void Base::setPrivateMember(std::string message)
{
    privateMember = message;
}

void Base::printPrivateMember()
{
    std::cout << "Private Member: " << privateMember << std::endl;
}

void Base::printProtectedMember()
{
    std::cout << "Protected Member: " << protectedMember << std::endl;
}

void Base::printPublicMember()
{
    std::cout << "Public Member: " << publicMember << std::endl;
}