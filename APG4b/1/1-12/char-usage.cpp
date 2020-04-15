#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Hello";

    char h = str.at(0);
    cout << h << endl;

    char c = 'a';
    cout << c << endl;

    str.at(1) = c;
    cout << str << endl;

    int count = 0;
    for (int i = 0; i < str.size(); ++i)
    {
        if (str.at(i) == 'l')
            count++;
    }
    cout << count << endl;
}
