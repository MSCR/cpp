#include "derivated.h"
#include <iostream>

int main()
{
    Derivated derivated{};

    std::cout << derivated.getPrivateMember() << std::endl;
    std::cout << derivated.getProtectedMember() << std::endl;
    std::cout << derivated.publicMember << std::endl;

    return 0;
}