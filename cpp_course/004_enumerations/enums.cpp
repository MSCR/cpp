#include <iostream>

using namespace std;

enum OrderSide:int64_t {BUY=1, SELL=-1};
enum class Days:uint8_t {Monday=1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

typedef long int BigOnes;
using ShortOnes = short int;

int main()
{
    OrderSide transaction = BUY;
    int t = transaction;
    cout << "Var t: " << t << endl;

    //Days d = Monday;
    Days day = Days::Monday;
    //int d = day;

    BigOnes myBigNum = 0L;
    cout << "Size of myBigNum: " << sizeof(myBigNum) << endl;
    ShortOnes myShortNum = 0;
    cout << "Size of myShortNum: " << sizeof(myShortNum) << endl;

    return 0;
}