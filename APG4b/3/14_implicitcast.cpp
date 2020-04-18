#include <bits/stdc++.h>
using namespace std;

void print_int(int x)
{
    cout << "x = " << x << endl;
}

int main()
{
    double a = 1.2345;
    int b = 1;

    // aがdouble型に変換されてからbとの足し算が行われる
    // cout << a + (double)b << endl; と同じ結果
    cout << a + b << endl;

    int c = 2000000000;
    int64_t d = 100;
    // 初めにcがint64_t型へ変換されてからdとの掛け算が行われる
    // cout << (int64_t)c * d << endl; と同じ結果
    cout << c * d << endl;

    double e = 3.141592;
    int f = e; // ここでdouble型からint型への変換が起こる(小数点以下が切り捨てられて3になる)
    cout << f << endl;

    // int型を引数に取る関数にdouble型を渡す
    print_int(e); // int型に変換されてから関数が実行される
}
