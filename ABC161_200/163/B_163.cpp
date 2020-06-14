#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> A(M);
    for (auto &&i : A)
        cin >> i;

    int sum = 0;
    for (int i = 0; i < A.size(); ++i)
        sum += A.at(i);

    int answer = N - sum;
    if (N - sum < 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << answer << endl;
    }
    return 0;
}