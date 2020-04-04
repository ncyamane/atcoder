
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    vector<int> A(N, 0);
    cin >> N;
    cin >> M;
    int sum = 0;
    int count = 0;
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
        sum += A[i];
    }

    for (int i = 0; i < N; ++i)
    {
        if (A[i] >= sum / 4 / M)
        {
            count += 1;
        }
    }
    if (count >= M)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}