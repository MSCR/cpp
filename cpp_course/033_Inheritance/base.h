#include <string>

class Base
{
    private:
        std::string privateMember{};

    protected:
        std::string protectedMember{};
    
    public:
        std::string publicMember{};

        // Constructor
        Base();

        // Functions
        void setPrivateMember(std::string);
        void printPrivateMember();
        void printProtectedMember();
        void printPublicMember();
};