/*
https://atcoder.jp/contests/apg4b/tasks/APG4b_cl
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, A;
    cin >> N >> A;

    for (int i = 0; i < N; ++i)
    {
        int a;
        string op;
        cin >> op >> a;

        if (op == "+")
        {
            A += a;
        }
        else if (op == "-")
        {
            A -= a;
        }
        else if (op == "*")
        {
            A *= a;
        }
        else if (op == "/" && a != 0)
        {
            A /= a;
        }
        else
        {
            cout << "error" << endl;
            break;
        }
        cout << i + 1 << ":" << A << endl;

        if (i >= N)
            break;
    }
}