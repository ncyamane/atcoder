#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec1 = {1, 2, 3};
    vector<int> vec2 = {1, 2, 3};

    if (vec1 == vec2)
    {
        cout << "OK" << endl;
    }

    vec2 = vector<int>(10, 0);

    if (vec1 != vec2)
    {
        cout << "NG" << endl;
    }
}