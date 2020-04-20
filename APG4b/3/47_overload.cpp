#include <bits/stdc++.h>
using namespace std;

pair<int, int> operator+(pair<int, int> a, pair<int, int> b)
{
    pair<int, int> ret;
    ret.first = a.first + b.first;
    ret.second = a.second + b.second;
    return ret;
}

bool operator<(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second)
        return a.second < b.second;
    else
        return a.first < b.first;
}
bool operator>(pair<int, int> a, pair<int, int> b) { return a < b; }
bool operator<=(pair<int, int> a, pair<int, int> b) { return !(a < b); }
bool operator>=(pair<int, int> a, pair<int, int> b) { return !(a < b); }

int main()
{
    pair<int, int> a = {1, 5};
    pair<int, int> b = {3, 3};
    auto c = a + b;
    cout << c.first << ", " << c.second << endl; // 4, 6

    cout << (a < b) << endl;
    cout << (a > b) << endl;
}
