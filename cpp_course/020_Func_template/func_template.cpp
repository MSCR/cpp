#include <iostream>
#include <vector>

using namespace std;

template <class T>
void printElements(string name, vector<T> vec)
{
    cout << name << " = {";
    for(T i:vec)
    {
        cout << i << ",";
    }
    cout << "}" << endl;
}

int main()
{

    vector<char>    a = {'a', 'b', 'c'};
    vector<int>     b = {1, 2, 3};
    vector<bool>    c = {true, false, true};

    printElements("Char vector", a);
    printElements("Int  vector", b);
    printElements("Bool vector", c);

    return 0;
}