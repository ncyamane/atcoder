#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    string str;
    cin >> N >> str;
    int count = 0;
    for (int i = 0; i < N; ++i)
    {
        int a, b;
        if (abs(j - i) != abs(k - j))
        {
            if (str.at(i) != str.at(j) && str.at(i) != str.at(k) && str.at(j) != str.at(k))
            {
                count += 1;
            }
        }
    }
    cout << count << endl;
    return 0;
}