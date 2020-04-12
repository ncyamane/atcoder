#include <bits/stdc++.h>
using namespace std;

int main()
{
    uint64_t N;
    cin >> N;

    uint64_t sum = 0;
    for (uint64_t i = 1; i < N + 1; i++)
    {
        if ((i % 3 != 0) && (i % 5 != 0))
        {
            sum += i;
        }
    }
    cout << sum << endl;

    return 0;
}