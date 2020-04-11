#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    for (int i = 0; i < M; i++)
    {
        cin >> A.at(i) >> B.at(i);
    }

    // (ここで"試合結果の表"の2次元配列を宣言)
    vector<vector<char>> kekka(N, vector<char>(N, '-'));
    for (int i = 0; i < A.size(); ++i)
    {
        A.at(i)--, B.at(i)--;
        kekka.at(A.at(i)).at(B.at(i)) = 'o';
        kekka.at(B.at(i)).at(A.at(i)) = 'x';
    }

    for (int i = 0; i < kekka.size(); ++i)
    {
        for (int j = 0; j < kekka.at(0).size(); ++j)
        {
            cout << kekka.at(i).at(j);
            if (j == kekka.at(0).size() - 1)
            {
                cout << endl; // 末尾なら改行
            }
            else
            {
                cout << " "; // それ以外なら空白
            }
        }
    }
}
