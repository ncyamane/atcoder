#include <bits/stdc++.h>
using namespace std;

struct MyPair
{
    int x;
    string y;
    // 初期化子リストを用いた初期化
    MyPair() : x(123), y("hello")
    {
    }
};

int main()
{
    MyPair p; // コンストラクタにより初期化される
    cout << "p.x = " << p.x << endl;
    cout << "p.y = " << p.y << endl;
}
