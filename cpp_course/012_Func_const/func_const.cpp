#include <iostream>
#include <vector>

using namespace std;

float average(const vector<int>& v)
{
    float sum = 0;

    //v[0] = 0;

    for(int i:v)
    {
        sum += i;
    }

    return sum/v.size();
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6};

    cout << "The mean of v is: " << average(v) << endl;

    return 0;
}