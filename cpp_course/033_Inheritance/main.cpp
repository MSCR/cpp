#include "derivated.h"
#include <iostream>

int main()
{
    Base base{};

    //base.privateMember = "Private from main";
    base.setPrivateMember("Private from main");
    // base.protectedMember = "Protected from main";
    base.publicMember = "Public from main";

    base.printPrivateMember();
    base.printProtectedMember();
    base.printPublicMember();

    Derivated derivated{};

    derivated.setPrivateMember("Derivated: Private from main");
    //derivated.protectedMember = "Derivated: Protected from main";
    derivated.setProtectedMember("Derivated: Protected from main");
    derivated.publicMember = "Derivated: Public from main";

    derivated.printPrivateMember();
    derivated.printProtectedMember();
    derivated.printPublicMember();    

    return 0;
}