#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, X;
  cin >> N >> M >> X;
  vector<int> C(N), A(N * M);

  for (int i = 0; i < N; ++i) {
    cin >> C.at(i);
    for (int j = 0; j < M; ++j) {
      cin >> A.at(i * M + j);
    }
  }

  // ただ大きな数で初期化する
  const int INF = 2147483647;
  int ans = INF;
  // 部分集合の問題なのでビットに直してループを書く
  for (int s = 0; s < (1 << N); ++s) {
    int cost = 0;
    vector<int> D(M);
    for (int i = 0; i < N; ++i) {
      // i番目のビットが建っているかどうか
      if ((s >> i) & 1) {
        cost += C.at(i);
        // 合計を求める
        for (int j = 0; j < M; ++j) {
          D.at(j) += A.at(i * M + j);
        }
      }
    }
    bool OK = true;
    for (int j = 0; j < M; ++j) {
      // 1つでも条件を満たさなければfalse
      if (D.at(j) < X) OK = false;
    }
    // falseなら評価をしない
    if (OK) ans = min(ans, cost);
  }
  if (ans == INF)
    cout << -1 << endl;
  else
    cout << ans << endl;
}