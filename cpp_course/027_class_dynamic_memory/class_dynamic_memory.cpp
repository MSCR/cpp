#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class CMessage
{
    private:
        char* pmessage;
    public:

        // Function to display a message
        void ShowIt()
        {
            cout << pmessage << endl;
        }

        // Constructor definition
        CMessage(const char* text = "Default message")
        {
            //Allocate space for text
            pmessage = new char[strlen(text) + 1];
            // Copy text to new memory
            strcpy(pmessage, text);
        }

        ~CMessage();    // Destructor prototype
};

CMessage::~CMessage()
{
    cout << "Destructor called." << endl;
    delete[] pmessage;
}

int main()
{
    // Declare object
    CMessage motto("A miss is as good as a mile.");
    CMessage* pM = new CMessage("A cat can look at a queen.");

    motto.ShowIt();
    pM->ShowIt();

    delete pM;

    return 0;
}