#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    char charString[] = {'h','e','l','l','o',0};
    cout << "Sizeof charString: " << sizeof(charString) << endl;

    char str[] = "hello";
    cout << "Sizeof str: " << sizeof(str) << endl;

    string str1 = "hello";
    string str2{"World"};
    string str3;
    int len;

    // copy str1 into str3
    str3 = str1;
    cout << "str3 : " << str3 << endl;

    // concatenate str1 and str2
    str3 = str1 + str2;
    cout << "str1 + str2 : " << str3 << endl;

    // total lenght of str3 after concatenation
    len = str3.size();
    cout << "str3.size() : " << len << endl;

    stringstream ss;            //cout/cin
    ss << 100 << ' ' << 200;    // 100 200

    int foo, bar;
    ss >> foo >> bar;

    cout << "foo: " << foo << endl;
    cout << "bar: " << bar << endl;

    return 0;

}