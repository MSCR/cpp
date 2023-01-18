#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<char> a = {'a', 'b', 'c'};

    //a.at(5);

    try
    {
        a.at(5);
    }
    catch (const exception)
    {
        cout << "Exception!" << endl;
    }

    for(char i:a)
    {
        cout << i << endl;
    }

    return 0;
}