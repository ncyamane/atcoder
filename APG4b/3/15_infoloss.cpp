#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x = 1000000000;
    double y = 0.000000001;

    // 1000000000.000000001 を表現するには19桁分必要 → 扱えない
    double z = x + y; // yの分が消えてしまう

    cout << fixed << setprecision(16);
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;
}
