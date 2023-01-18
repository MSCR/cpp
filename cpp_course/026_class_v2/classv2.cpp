#include <iostream>

using namespace std;

class CBox  // Class definition at global scope
{
    public:

        static int objectCount;
        // Default constructor
        CBox()
        {
            cout << "Default Constructor called." << endl;
            objectCount++;
        }

        // Specific constructor
        CBox(double lv, double bv, double hv = 1.0)
        {
            cout << endl << "Constructor called.";

            m_Length = lv;
            m_Width = bv;
            m_Height = hv;
            objectCount++;
        }

        // Specific constructor
        CBox(int lv, int bv, int hv):
                    m_Height(hv), m_Length(lv), m_Width(bv)
        {
            cout << "Constructor 2 called." << endl;
            objectCount++
        }

        static void aFunction()
        {
            cout << "Static function" << endl;
        }

        // Function member or method
        double Volume() const;

        int Compare(CBox xBox)
        {
            return this->Volume() > xBox.Volume();
        }

        ~CBox()
        {
            cout << "Destructor called." << endl;
        }

        // Getter
        double getLenght() const { return m_Length;}
        void setLenght(double l) {m_Length=l;}

    private:
        // Attributes
        double m_Length;    // Lengh of a box in inches
        double m_Width;     // Width of a box in inches
        double m_Height;    // Height of a box in inches

        // Friend function
        friend double BoxSurface(CBox);
};

int CBox::objectCount = 0; // Initialize static member of class CBox

double BoxSurface(CBox aBox)
{
    return 2*(aBox.m_Length*aBox.m_Width +
    aBox.m_Length*aBox.m_Height +
    aBox.m_Height*aBox.m_Width);
}

double CBox::Volume() const
{
    return m_Height*m_Length*m_Width;
    
}

int main()
{
    CBox box1;  // Declare box1 of type CBox
    CBox box2{1.0, 2.0, 3.0};  // Declare box2 of type CBox
    CBox box3{4.0, 5.0};  // Declare box2 of type CBox

    //box1.m_Length = -5;

    CBox box4 = box2;

    cout << "box1 volume = " << box4.Volume() << endl
         << "box2 volume = " << box2.Volume() << endl;

    if(box3.Compare(box2))
    {
        cout << "box2 is smaller than box3" << endl;
    }
    else
    {
        cout << "box3 is equal or larger than box2" << endl;
    }

    const CBox standard(3.0, 5.0, 8.0);

    CBox boxes[5];
    CBox cigar(8.0, 5.0, 1.0);
    cout << "Volume of boxes[3] = " << boxes[3].Volume()
         << endl
         << "Volume of cigar = " << cigar.Volume();

    // Static function
    CBox::aFunction();
    cigar.aFunction();

    // Pointer to class
    CBox* pBox = nullptr;
    pBox = &cigar;
    cout << "Accessing volume function from pointer: " << pBox->Volume();

    // Reference to class
    CBox& rBox = cigar;
    cout << "Accessing volume function from reference: " << rBox.Volume();

    return 0;
}