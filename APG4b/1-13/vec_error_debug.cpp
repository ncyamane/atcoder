#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3};
    cout << vec[10] << endl; // 実行時エラーが起きる
}
