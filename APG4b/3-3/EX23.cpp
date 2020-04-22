#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    for (auto &&i : A)
        cin >> i;

    map<int, int> cnt;
    for (auto &&i : A)
    {
        if (cnt.count(i))
            cnt.at(i)++;
        else
            cnt[i] = 1;
    }

    int max_cnt = 0;
    int ans = -1;
    for (auto &&i : A)
    {
        if (max_cnt < cnt.at(i))
        {
            max_cnt = cnt.at(i);
            ans = i;
        }
    }

    cout << ans << " " << max_cnt << endl;
}
