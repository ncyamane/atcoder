#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> ptmath(N), pteng(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> ptmath.at(i);
    }
    for (int i = 0; i < N; ++i)
    {
        cin >> pteng.at(i);
    }

    for (int i = 0; i < N; ++i)
    {
        cout << ptmath.at(i) + pteng.at(i) << endl;
    }
}