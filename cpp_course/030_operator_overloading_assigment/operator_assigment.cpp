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

        CMessage& operator=(const CMessage& aMess)
        {
            if(this == &aMess)  // Check addresses, if equal
            {
                return *this;   // return the 1st operand
            }

            // Release memory for 1st operand
            pmessage = new char[strlen(aMess.pmessage)+i];
            // Copy 2nd operand string to 1st
            strcpy(this->pmessage, aMess.pmessage);
            // Return a reference to 1st operand
            return *this;
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
    CMessage motto1("A miss is as good as a mile.");
    CMessage motto2(motto1);
    CMessage motto3 = motto2;

    motto1.ShowIt();
    motto2.ShowIt();
    motto3.ShowIt();

    motto3 = motto2;

    motto3.ShowIt();

    return 0;
}