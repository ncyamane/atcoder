#include <bits/stdc++.h>
using namespace std;

struct MyPair
{
    int x;    // 1つ目のデータはint型であり、xという名前でアクセスできる
    string y; // 2つ目のデータはstring型であり、yという名前でアクセスできる
};

int main()
{
    MyPair p = {12345, "hello"}; // MyPair型の値を宣言
    cout << "p.x = " << p.x << endl;
    cout << "p.y = " << p.y << endl;
}
