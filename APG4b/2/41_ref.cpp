#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 3;
    int &b = a; // bは変数aの参照
    int &c = b;

    cout << "a: " << a << endl; // aの値を出力
    cout << "b: " << b << endl; // bの参照先の値を出力(aの値である3が出力される)
    cout << "c: " << c << endl; // bの参照先の値を出力(aの値である3が出力される)

    b = 4; // 参照先の値を変更(aが4になる)

    cout << "a: " << a << endl; // aの値を出力
    cout << "b: " << b << endl; // bの参照先の値を出力(aの値である4が出力される)

    b = b + 1;

    cout << "a: " << a << endl; // aの値を出力
    cout << "b: " << b << endl; // bの参照先の値を出力(aの値である4が出力される)

    string s = "apg4b";
    string &t = s;              // string型変数sへの参照
    cout << "t: " << t << endl; // aの値を出力

    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> &w = v;                  // vector<int>型変数vへの参照
    cout << "w[0]: " << w.at(0) << endl; // aの値を出力
}