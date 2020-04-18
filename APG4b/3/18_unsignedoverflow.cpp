#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> data(0);             // サイズ0
    cout << data.size() - 1 << endl; // -1ではない

    // 配列のサイズ-1回だけループしたい
    for (int i = 0; i < data.size() - 1; i++)
    {
        cout << i << endl;
        if (i < 10000)
        {
            break;
        }
    }
}
