#include "derivated.h"
#include <string>

Derivated::Derivated()
{
    // privateMember = "Private from base";
    // Alternativelly setPrivateMember can be used:
    setPrivateMember("Private from base");

    protectedMember = "Protected from base";
    publicMember = "Public from base";
}

void Derivated::setProtectedMember(std::string message)
{
    protectedMember = message;
}