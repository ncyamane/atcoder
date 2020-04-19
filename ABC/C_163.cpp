#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);

    A.at(0) = -1;
    for (int i = 1; i < A.size(); ++i)
        cin >> A.at(i);

    vector<vector<int>> sub(N);
    for (int i = 1; i < N; i++)
    {
        int leader = A.at(i) - 1;    // i番の上司の番号
        sub.at(leader).push_back(i); // 上司の部下一覧にi番を追加
    }
    for (int i = 0; i < N; ++i)
        cout << sub.at(i).size() << endl;
}