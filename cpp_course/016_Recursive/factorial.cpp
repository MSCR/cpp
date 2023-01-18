#include <iostream>

using namespace std;

static int timesExecuted = 0;

long long factorial(int n)
{
    ++timesExecuted;
    return ((n==1)? 1LL: (n * factorial(n-1)));
}

int main()
{

    cout << "1! = " << factorial(1) << ", timesExec = " << timesExecuted << endl;
    timesExecuted = 0;
    cout << "5! = " << factorial(5) << ", timesExec = " << timesExecuted << endl;
    timesExecuted = 0;
    cout << "13! = " << factorial(13) << ", timesExec = " << timesExecuted << endl;
    timesExecuted = 0;

    return 0;
}