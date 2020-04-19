#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> S;

    S.insert(3);
    S.insert(7);
    S.insert(8);
    S.insert(10);
    // 既に3は含まれているのでこの操作は無視される
    S.insert(3);

    // 集合の要素数を出力
    cout << "size: " << S.size() << endl;

    // 7が含まれるか判定
    if (S.count(7))
    {
        cout << "found 7" << endl;
    }
    // 5が含まれるか判定
    if (S.count(5))
    {
        cout << "found 5" << endl;
    }
}
