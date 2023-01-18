#include <iostream>

using namespace std;

class A
{
    public:
        A()
        {
            cout << "Constructor A" << endl;
        }
};

A a;

int main(int argc, char** argv)
{
    int number_arguments = argc;
    char arguments[argc]{};
    int arr[]{1,2,3,4,5};
    
    cout << "Number of arguments: " << number_arguments << endl;
    cout << "Arguments: " << endl;
    for(int i=0; i<number_arguments; i++)
    {
        cout << argv[i] << endl;
    }

    return 0;
}