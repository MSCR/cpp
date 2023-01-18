#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> vec = {1, 3, 5, 7, 9};
    int min_print = 3;
    auto print{ [=](const int& item){ if(min_print < item) {cout << item << ",";}}};    // [=][][&]
    std::for_each(vec.begin(), vec.end(), print);
    cout << endl;

    auto a = []()->int{return 1;};
    cout << a() << endl;

    return 0;
}