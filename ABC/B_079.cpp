#include <bits/stdc++.h>
using namespace std;

int64_t GetLukas(int64_t N, vector<int64_t> &tmp)
{
    if (N == 0)
        return 2;
    else if (N == 1)
        return 1;

    if (tmp.at(N) != -1)
        return tmp.at(N);

    return tmp.at(N) = GetLukas(N - 1, tmp) + GetLukas(N - 2, tmp);
}

int main()
{
    int64_t N;
    cin >> N;
    vector<int64_t> tmp(N + 1, -1);
    cout << GetLukas(N, tmp) << endl;
}