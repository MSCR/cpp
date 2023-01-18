#include <iostream>
#include <cstdarg>

using namespace std;

double average(int count, ...);

int main()
{

    cout << "AVG(2,3,4,5) = "
         << average(/*count*/4, 2,3,4,5) << endl;
    cout << "AVG(5,10,15) = "
         << average(/*count*/3, 5,10,15) << endl;

    return 0;
}

double average(int count, ...)
{
    va_list valist;
    double sum = 0.0;

    // Initialize valist for num number of arguments
    va_start(valist, count);
    for(auto i=0; i<count; i++)
    {
        // Access all the arguments assigned to valist
        sum += va_arg(valist, int);
    }

    // Clean memory reserved for valist
    va_end(valist);

    return (sum/count);
}

