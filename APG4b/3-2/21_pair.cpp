#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<string, int> p("abc", 3);
    cout << p.first << endl; // abc

    p.first = "hello";
    cout << p.first << endl;  // hello
    cout << p.second << endl; // 3

    p = make_pair("*", 1);

    string s;
    int a;
    tie(s, a) = p;
    cout << s << endl; // *
    cout << a << endl; // 1

    pair<int, int> A(3, 1);
    pair<int, int> B(2, 10);
    // 3 > 2 なので a < b は false
    if (A < B)
    {
        cout << "a < b" << endl;
    }
    else
    {
        cout << "a >= b" << endl;
    }

    pair<int, int> c(5, 1);
    pair<int, int> d(5, 10);
    // 5 == 5 であり 1 < 10 なので c < d は true
    if (c < d)
    {
        cout << "c < d" << endl;
    }
    else
    {
        cout << "c >= d" << endl;
    }
}
