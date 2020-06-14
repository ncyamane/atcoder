#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  vector<string> s(h);
  for (auto&& e : s) cin >> e;

  //  差分の配列を用意しておく
  const int dx[8] = {1, 0, 1, -1, 0, 1, -1, -1};
  const int dy[8] = {0, 1, 1, 0, -1, -1, 1, -1};

  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      if (s.at(i).at(j) == '#') continue;

      int bomb = 0;
      for (int d = 0; d < 8; d++) {
        const int ii = i + dx[d];
        const int jj = j + dy[d];

        // 端の場合の処理
        if (ii < 0 or h <= ii) continue;
        if (jj < 0 or w <= jj) continue;

        if (s.at(ii).at(jj) == '#') bomb++;
      }
      s.at(i).at(j) = char(bomb + '0');
    }
  }

  for (auto&& e : s) cout << e << endl;
}