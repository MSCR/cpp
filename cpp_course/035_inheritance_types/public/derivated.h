#include "base.h"

class Derivated: public Base
{
    public:
        inline std::string getProtectedMember()
        {
            return protectedMember;
        }
};