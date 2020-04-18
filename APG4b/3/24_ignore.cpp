#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> p(3, 5);
    int right;
    tie(ignore, right) = p; // 2番目の値だけ取り出す
    cout << right << endl;  // 5

    tuple<int, string, bool> tpl(2, "hello", false);
    int x;
    string s;
    tie(x, s, ignore) = tpl;       // 1番目の値、2番目の値だけ取り出す
    cout << x << " " << s << endl; // 2 hello
}
