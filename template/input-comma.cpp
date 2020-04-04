#include <bits/stdc++.h>
using namespace std;

int main()
{
    // コンマ区切り
    int i = 0;
    char str[10], *b[10], *c[10], *d[10];
    while (cin >> str)
    {
        b[i] = strtok(str, ",");
        c[i] = strtok(NULL, ",");
        d[i] = strtok(NULL, ",");
        cout << b[i] << endl;
        cout << c[i] << endl;
        cout << d[i] << endl;
        i++;
    }
    return 0;
}