#include <bits/stdc++.h>
using namespace std;

int main()
{

    for (int i = 0; i < 5; i++)
    {

        if (i == 3)
        {
            cout << "とばす" << endl;
            continue; // i == 3 のとき これより後の処理をとばす
        }

        cout << i << endl;
    }

    cout << "終了" << endl;
}
