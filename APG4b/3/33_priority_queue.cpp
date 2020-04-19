#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(3);
    pq.push(6);
    pq.push(1);

    // 空でない間繰り返す
    while (!pq.empty())
    {
        cout << pq.top() << endl; // 最大の値を出力
        pq.pop();                 // 最大の値を削除
    }

    priority_queue<int, vector<int>, greater<int>> pr;
    pr.push(10);
    pr.push(3);
    pr.push(6);
    pr.push(1);

    // 空でない間繰り返す
    while (!pr.empty())
    {
        cout << pr.top() << endl; // 最小の値を出力
        pr.pop();                 // 最小の値を削除
    }
}