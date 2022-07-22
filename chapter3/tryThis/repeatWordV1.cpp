// This program output the message "Hello World!" to the monitor
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()  // C++ programs start by executing the function main
{
    // Variable declaration
    string previous = " ";  // Previous work initialized to "not a word"
    string current;         // Current word

    while(cin >> current)   // Read a stream of words
    {
        if(previous == current) // Check if the word is the same as the last
        {
            cout << "Repeated word: " << current << "\n";
        }
        previous = current;
    }
    cout << "Bye";
    return 0;
}