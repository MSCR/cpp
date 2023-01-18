#include "base.h"

class Derivated: private Base
{
    public:
        inline std::string getProtectedMember()
        {
            return protectedMember;
        }

        inline std::string getPublicMember()
        {
            return publicMember;
        }

        inline std::string getPrivateMember()
        {
            return Base::getPrivateMember();
        }
};