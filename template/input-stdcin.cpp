#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int tmp, i = 0, a[N];
    while (cin >> tmp)
    {
        a[i] = tmp;
        i++;
        if (i >= N)
            break;
    }

    for (int i = 0; i < N; ++i)
    {
        cout << a[i] << "\n";
    }

    return 0;
}