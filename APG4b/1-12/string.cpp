#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1;
    str2 = ", world!";

    cout << str1 << str2 << endl;
    cout << "文字の長さ:" << str1.size() << endl;
    cout << 3 << "番目の文字:" << str1.at(2) << endl;
    cout << "Hello"s.size() << endl;
    cout << str1 + str2 << endl; // Hello, world!

    if (str1 > str2)
    {
        cout << str1 << ">" << str2 << endl;
    }
    if (str1 < str2)
    {
        cout << str1 << "<" << str2 << endl;
    }
}