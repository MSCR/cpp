#include <iostream>

using namespace std;

string& larger(string& s1, string& s2)
{
    /*if(si<s2)
        return s1;
    else
        return s2;
    */
    return (s1<s2)?s1:s2;   // (condition)?true:false;
}

int main()
{

    string str1{"abcx"};
    string str2{"abcf"};
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;

    larger(str1,str2) = "defg";
    cout << endl;

    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;

    return 0;
}