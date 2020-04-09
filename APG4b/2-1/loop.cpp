#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    vector<int> data(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> data.at(i);
    }

    int sum = 0;
    for (int i = 0; i < data.size(); i++)
    {
        if (a == data.at(i))
        {
            sum += 1;
        }
    }
    cout << sum << endl;
}
