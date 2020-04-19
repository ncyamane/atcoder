#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(10);
    d.push_back(1);
    d.push_back(3);

    // この時点で d の内容は { 10, 1, 3 } となっている

    cout << d.front() << endl; // 10 (先頭の要素)
    d.pop_front();             // 先頭を削除

    // この時点で d の内容は { 1, 3 } となっている

    cout << d.back() << endl; // 3 (末尾の要素)
    d.pop_back();             // 末尾を削除

    // この時点で d の内容は { 1 } となっている

    d.push_front(5);
    d.push_back(2);

    // この時点で d の内容は { 5, 1, 2 } となっている

    cout << d.at(1) << endl; // 1
}