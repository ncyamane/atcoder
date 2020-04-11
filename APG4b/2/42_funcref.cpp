#include <bits/stdc++.h>
using namespace std;

int f(int x)
{
    x *= 2;   // 2. xを2倍
    return x; // 3. xの値を返す
}

int g(int &x)
{
    x *= 2;
    return x;
}

void min_and_max(int a, int b, int c, int &minimum, int &maximum)
{
    minimum = min(a, min(b, c));
    maximum = max(a, max(b, c));
}

int main()
{
    int a = 3;    // "呼び出す側の変数"
    int b = f(a); // 1. aの値をfに渡し、4. 結果をbに代入
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    int c = g(a);
    cout << "a: " << a << endl;
    cout << "c: " << c << endl;

    int mini, maxm;
    min_and_max(3, 1, 5, mini, maxm);
    cout << mini << endl;
    cout << maxm << endl;
}
