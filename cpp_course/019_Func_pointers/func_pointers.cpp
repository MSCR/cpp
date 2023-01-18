#include <iostream>
#include <string>

using namespace std;

using Callback = void (*)(int);

Callback globalCallback = nullptr;

bool subscribe(Callback callback)
{
    globalCallback = callback;
}

void receivedUpdate(int value)
{
    globalCallback(value);
}

void userCallback(int value)
{
    cout << "USER: Print value=" << value << endl;
}

int main()
{
    // User code
    (void) subscribe(&userCallback);

    // Imagine we received an update, trigger user callback
    receivedUpdate(5);

    return 0;
}