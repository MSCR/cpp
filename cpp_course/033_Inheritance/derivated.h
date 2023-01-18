#include "base.h"

class Derivated: public Base
{
    public:
        Derivated();
        void setProtectedMember(std::string);
};