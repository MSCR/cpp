#include <iostream>
#include <string>

using namespace std;

void printError(const string& error = "General Failure!")
{
    cout << "ERROR: " << error << endl;
}

int main()
{
    const string futureError{"Error that might happen later!"};
    printError();
    printError("Specific Error!");
    printError(futureError);

    return 0;
}