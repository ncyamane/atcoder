#include <bits/stdc++.h>
using namespace std;

int main()
{
    tuple<int, string, bool> data(1, "hello", true);
    get<2>(data) = false;
    cout << get<1>(data) << endl; // hello

    data = make_tuple(2, "WORLD", true);

    int a;
    string s;
    bool f;
    tie(a, s, f) = data;
    cout << a << " " << s << " " << f << endl; // 2 WORLD 1

    vector<tuple<int, int, int>> A;
    A.push_back(make_tuple(3, 1, 1));
    A.push_back(make_tuple(1, 2, 100));
    A.push_back(make_tuple(3, 5, 1));
    A.push_back(make_tuple(1, 2, 3));
    sort(A.begin(), A.end());

    for (tuple<int, int, int> t : A)
    {
        int x, y, z;
        tie(x, y, z) = t;
        cout << x << " " << y << " " << z << endl;
    }
}
