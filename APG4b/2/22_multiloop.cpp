#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "i:" << i << ", j:" << j << endl;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << "i:" << i << ", j:" << j << ", k:" << k << endl;
            }
        }
    }
}
