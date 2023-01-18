#include <iostream>
#include <iomanip>

//using namespace std;

int main()
{
    int x=0, y=0;
    std::cout << "Enter 2 numbers to work with:\n";
    std::cin >> x >> y;

    std::cout << "Hex values:" << std::endl; 
    std::cout << std::hex << x << ' ' << y << std::endl;

    std::cout << "Width:" << std::endl; 
    std::cout << "\t" << std::setfill('0')  << std::setw(6) << x << ' ' << std::uppercase  << std::setw(2) << y << std::endl;

    std::cout << "Other:\t" << std::endl; 
    std::cout << std::oct << x << ' ' << std::dec << y << std::endl;

    std::cout << "Some operations: " << (x + y) * 2 << std::endl; 

    std::cout << "\n\tThis is the end\n";

    return 0;
}