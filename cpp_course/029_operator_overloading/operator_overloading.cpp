#include <iostream>

using namespace std;

class CBox  // Class definition at global scope
{
    public:
        // Default constructor
        CBox();
        // Specific constructor
        CBox(double lv, double bv, double hv = 1.0);
        // Specific constructor
        CBox(int lv, int bv, int hv);

        // Function member or method
        double Volume();

        bool operator>(CBox& aBox) { return this->Volume() > aBox.Volume(); }
        

        ~CBox();

    private:
        // Attributes
        double m_Length;    // Lengh of a box in inches
        double m_Width;     // Width of a box in inches
        double m_Height;    // Height of a box in inches
};

enum class days {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

ostream& operator<<(ostream& out, const days d)
{
    switch (d)
    {
        case days::Monday:{
            out << "Monday";
            break;
        }
        case days::Tuesday:{
            out << "Tuesday";
            break;
        }
        default:
        {
            out << "Other days";
            break;
        }
    };
    return out;
}

ostream& operator<<(ostream& out, CBox x)
{
    out << "myVolume" << x.Volume();
    return out;
}

int main()
{
    CBox cigar(8.0, 5.0, 1.0);
    CBox match(2.2, 1.1, 0.5);

    if(cigar > match)
    {
        cout << "cigar is larger than match" << endl;
    }
    else
    {
        cout << "match is larger thatn cigar" << endl;
    }

    days myDay = days::Saturday;
    cout << myDay << endl;
    myDay = days::Monday;
    cout << myDay << endl;

    return 0;
}

double CBox::Volume()
{
    return m_Height*m_Length*m_Width;
}

CBox::CBox()
{
    cout << "Default Constructor called." << endl;
}

CBox::CBox(double lv, double bv, double hv)
{
    cout << "Constructor called." << endl;
    m_Length = lv;
    m_Width = bv;
    m_Height = hv;
}

CBox::CBox(int lv, int bv, int hv):
            m_Height(hv), m_Length(lv), m_Width(bv)
{
    cout << "Constructor 2 called." << endl;
}

CBox::~CBox()
{
    cout << "Destructor called." << endl;
}