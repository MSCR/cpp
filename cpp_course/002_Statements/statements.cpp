#include <iostream>

using namespace std;

int main()
{
    cout << "Variable values" << endl;
    // Variable declararion
    int i;
    // Varible definition
    i = 0;
    cout << "i value: " << i << endl;

    float f = 1.5f;
    float f2 = 1.5E5;
    cout << "f value: " << f << endl;
    cout << "f2 value: " << f2 << endl;

    string s = "a"; // -> 'a' + \0
    char c = 'a';   // -> 'a'

    // Alternate ways to init a variable
    //char c('m');
    bool q{true};
    auto expression = 4 + 5.5f;

    // Compound statement
    {
        cout << endl << "Variable size" << endl;
        wchar_t wc = 'z';
        cout << "wc size: " << sizeof(wc) << endl;
        cout << "q size: " << sizeof(q) << endl;
    }

    return 0;

}