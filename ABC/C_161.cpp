
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int64_t N;
    int64_t K;
    cin >> N;
    cin >> K;
    int count = 0;
    while (true)
    {
        if (N == min(N, abs(N - K)))
        {
            count += 1;
            if (count > 2)
                break;
        }
        else if (N != min(N, abs(N - K)))
        {
            N = N - K;
            count = 0;
        }
    }
    cout << N;
    return 0;
}