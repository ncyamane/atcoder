#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    bool answer = false;
    for (int i = 0; i < 3; ++i)
    {
        if (str.at(i) == '7')
        {
            answer = true;
        }
    }

    if (answer)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}