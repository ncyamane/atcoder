#include <bits/stdc++.h>
using namespace std;

// 引数の値に5を足して出力する関数
void add5(int x)
{
    x += 5;
    cout << x << endl;
    return;
}

int main()
{
    int num = 10;
    add5(num); // numの値は引数xにコピーされる

    cout << num << endl; // numは10のまま
}
