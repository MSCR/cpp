#include <iostream>

using namespace std;

void processData(int* array, int size)
{
    for(int i = 0; i<size; i++)
    {
        array[i] = i;
    }
}

int main()
{
    int i = 20;
    int* iptr = &i;
    cout << "iptr size: " << sizeof(iptr) << endl;

    int array[5]{11,12,13,14,15};
    int array2[6]{21,22,23,24,25,26};
    
    processData(array, 5);

    int* const aptr = array;    // Constant pointer
    cout << "array[1]: " << array[1] << endl;
    cout << "*(array+1): "<< *(array+1) << endl;
    //aptr = array2;
    *(aptr+1) = 1;
    cout << "*(array+1): "<< *(array+1) << endl;

    int const *ptra = array;   // Pointer to a constant
    ptra = array2;
    //*(ptra+1) = 31;

    // arrays are constant pointers
    //array = array2;

    // Allocate dynamic memory
    // Pointer single element
    int *x = new int;
    *x = 5;
    cout << "*x: " << *x << endl;

    delete x;

    // Pointer several elements
    int *y = new int[5];
    // Write
    for(int i = 0; i<5; i++)
    {
        *(y+i) = i;
    }
    // Read
    for(int i = 0; i<5; i++)
    {
        cout << "*(y+"<< i << "): "<< *(y+i) << endl;
    }

    delete[] y;

    // References
    int q = 17;
    cout << "q: " << q << endl;

    int* p = &q;
    int& r = q;
    r = 18;
    cout << "r: " << r << endl; 
    cout << "q: " << q << endl;
    *p = 19;

    return 0;
}