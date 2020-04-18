#include <iostream>
#include <vector>
using namespace std;

int64_t fibo(int n, vector<int64_t> &memo)
{
    // ベースケース
    if (n == 0)
        return 2;
    else if (n == 1)
        return 1;

    // メモをチェック (既に計算済みなら答えをリターンする)
    if (memo[n] != -1)
        return memo[n];

    // 答えをメモしながら、再帰呼び出し
    return memo[n] = fibo(n - 1, memo) + fibo(n - 2, memo);
}

int main()
{
    long long N;
    cin >> N;
    // メモ用配列 (-1 は未計算であることを表す)
    vector<int64_t> memo(N + 1, -1);
    cout << N << " 項目の値: " << fibo(N, memo) << endl;
}