#include <iostream>
#include <array>

using namespace std;

constexpr int arraySize = 5;

void arrayAsPointer(const int*, const int);
void arrayAsReference(const int (&)[arraySize]);
void stdArrayAsRef(const std::array<int,arraySize>);

int main()
{
    int arr[arraySize]{1, 2, 3, 4, 5};
    std::array<int, arraySize> arr2 = {6, 7, 8, 9, 10};

    arrayAsPointer(arr, arraySize);
    arrayAsReference(arr);
    stdArrayAsRef(arr2);

    return 0;
}

void arrayAsPointer(const int* array, const int size)
{
    cout << "ArrayAsPointer: ";
    for(int i=0; i<size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void arrayAsReference(const int (&array)[arraySize])
{
    cout << "arrayAsReference: ";
    for(int i:array)
    {
        cout << i << " ";
    }
    cout << endl;
}

void stdArrayAsRef(const std::array<int,arraySize> array)
{
    cout << "stdArrayAsRef: ";
    for(int i:array)
    {
        cout << i << " ";
    }
    cout << endl;
}