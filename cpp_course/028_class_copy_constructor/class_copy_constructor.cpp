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

        // Copy constructor definition
        CMessage(const CMessage& initM)
        {
            // Allocate space for text
            pmessage = new char[strlen(initM.pmessage)+1];
            // Copy text to new memory
            strcpy(pmessage, initM.pmessage);
        }

        ~CMessage();    // Destructor prototype
};

CMessage::~CMessage()
{
    cout << "Destructor called." << endl;
    delete[] pmessage;
}

void DisplayMessage(CMessage localMsg)
{
    cout << "The message is: " << endl;
    localMsg.ShowIt();
}

int main()
{
    // Declare object
    CMessage motto("Radiation fades your genes.");
    CMessage motto2(motto);

    CMessage thought("Eye awl weighs yews my spell checker.");
    DisplayMessage(thought);

    return 0;
}