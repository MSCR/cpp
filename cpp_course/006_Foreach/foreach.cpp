#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // ptr-> data
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "The elements on array are: ";
    for(auto i:arr)
    {
        cout << i << ' ';
    }
    cout << endl;

    for(int i=0; i<5; i++)
    {
        cout << arr[i] << endl;
    }

    cout << endl;

    // size | ptr -> data
    vector<int> vec{11, 22, 33, 44, 55};
    cout << "The elements on vector are: ";
    for(int i:vec)
    {
        cout << i << ' ';
    } 
    cout << endl;
    return 0;
}