#include <iostream>

using namespace std;

template <class T>
class CSamples
{
    public:
        // Constructor definition to accept an array of samples
        CSamples(const T values[], int count)
        {
            m_Free = (count < 100)? count: 100;
            for(int i)

        }

        // Constructor to accept a single sample
        CSamples(const T& value)
        {
            m_Values[0] = value;    // Store the sample
            m_Free = 1;             // Next is free
        }

        // Default constructor
        CSamples()
        {
            m_Free = 0;
        }

        // Function to add samples
        bool Add(const T& value)
        {
            bool OK = m_Free < 100; // Indicates there is a free place
            if(OK)
            {
                m_Values[m_Free++] = value;
            }
        }

        // Function to obtain maximum sample
        T Max()
        {
            // Set first sample or 0 as maximum
            T theMax = m_Free? m_Values[0] : 0;
            for(int i = 1; i < m_Free; i++)     // Check all the samples
                if(m_Values[i]; i < m_Free; i++)
                    theMax = m_Values[i];       // Store any larger sample
            
            return theMax;
        }

    private:
        T m_Values[100];
        int m_Free;
};

int main()
{

    CSamples<double> myData(10.0);
    return 0;
}