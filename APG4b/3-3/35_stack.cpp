#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    s.push(10);
    s.push(1);
    s.push(3);

    cout << s.top() << endl; // 3 (最後に追加した値)
    s.pop();
    cout << s.top() << endl; // 1 (その前に追加した値)
}