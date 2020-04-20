#include <bits/stdc++.h>
using namespace std;

struct MyPair
{
    int x;
    string y;
    // コンストラクタ1
    MyPair()
    {
        cout << "初期化無し" << endl;
    }
    // コンストラクタ2
    MyPair(int x_)
    {
        cout << "xのみ初期化" << endl;
        x = x_;
    }
    // コンストラクタ3
    MyPair(int x_, string y_)
    {
        cout << "x, y両方初期化" << endl;
        x = x_;
        y = y_;
    }
};

struct NumString
{
    int length;
    string s;
    // コンストラクタ
    NumString(int num)
    {
        cout << "constructor called" << endl;

        // 引数のnumを文字列化したものをsに代入し、sの文字数をlengthに代入する
        s = to_string(num); // (STLの関数)
        length = s.size();
    }
};

int main()
{
    MyPair p; // ここでコンストラクタが呼ばれる
    cout << "p.x = " << p.x << endl;
    cout << "p.y = " << p.y << endl;

    p.x = 12345;
    p.y = "hello";
    cout << "p.x = " << p.x << endl;
    cout << "p.y = " << p.y << endl;

    MyPair q(6789);
    cout << "q.x = " << q.x << endl;
    cout << "q.y = " << q.y << endl;

    MyPair r(12345, "Unko");
    cout << "r.x = " << r.x << endl;
    cout << "r.y = " << r.y << endl;

    MyPair d(p);
    cout << "d.x = " << d.x << endl;
    cout << "d.y = " << d.y << endl;

    NumString num(12345); // コンストラクタに 12345 が渡される
    cout << "num.s = " << num.s << endl;
    cout << "num.length = " << num.length << endl;
}
