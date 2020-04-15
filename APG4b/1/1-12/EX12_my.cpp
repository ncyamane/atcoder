#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int countp = 0, countm = 0;
    char c;
    for (int i = 0; i < S.size(); ++i)
    {
        c = S.at(i);
        if (c == '+')
        {
            countp += 1;
        }
        else if (c == '-')
        {
            countm += 1;
        }
    }

    int sum = 0;
    for (int i = 0; i < countp; ++i)
    {
        sum += 1;
    }
    for (int i = 0; i < countm; ++i)
    {
        sum -= 1;
    }
    cout << sum + 1 << endl;
}
