#include <bits/stdc++.h>
using namespace std;

// 0からnまでの和を求める関数sum
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sum(n - 1);
}

int main()
{
    cout << sum(3) << endl;
}
