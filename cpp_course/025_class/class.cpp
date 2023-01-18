#include <iostream>

using namespace std;

class CBox  // Class definition at global scope
{
    public:
        // Attributes
        double m_Length;    // Lengh of a box in inches
        double m_Width;     // Width of a box in inches
        double m_Height;    // Height of a box in inches

        // Default constructor
        CBox()
        {
            cout << endl << "Default Constructor called.";
        }

        // Specific constructor
        CBox(double lv, double bv, double hv)
        {
            cout << endl << "Constructor called.";
            m_Length = lv;
            m_Width = bv;
            m_Height = hv;
        }

        // Function member or method
        double Volume();

};

namespace x{
    int m_Height;
}

inline double CBox::Volume()
{
    return m_Height*m_Length*m_Width;
}

int main()
{
    CBox box1;  // Declare box1 of type CBox
    CBox box2{1.0,2.0};  // Declare box2 of type CBox
    double boxVolume = 0.0; // Stores the volume of a box

    box1.m_Height = 18.0;   // Define the values
    box1.m_Length = 78.0;   // of the members of
    box1.m_Width = 24.0;    // the object box1

    box2.m_Height = box1.m_Height - 10; // Define box2
    box2.m_Length = box1.m_Length/2.0;  // members in
    box2.m_Width = 0.2*box1.m_Width;    // terms of box1

    // Calculate volume of box1
    boxVolume = box1.m_Height*box1.m_Length*box1.m_Width;
    cout << "\nBox1 volume: " << boxVolume << endl;
    cout << "\nBox2 volume: " << box2.Volume() << endl;

    return 0;
}