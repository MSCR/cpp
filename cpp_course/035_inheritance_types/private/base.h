#include <string>

class Base
{
    private:
        std::string privateMember{"Private member"};

    protected:
        std::string protectedMember{"Protected member"};
    
    public:
        std::string publicMember{"Public member"};

        inline std::string getPrivateMember()
        {
            return privateMember;
        }
};