#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> H(N);
  for (size_t i = 0; i < H.size(); ++i) {
    cin >> H.at(i);
  }

  vector<int> high(N, 0);
  for (int i = 0; i < M; ++i) {
    int a, b;
    cin >> a >> b;
    high.at(a - 1) = max(high.at(a - 1), H.at(b - 1));
    high.at(b - 1) = max(high.at(b - 1), H.at(a - 1));
  }

  int ans = 0;
  for (size_t i = 0; i < H.size(); ++i) {
    if (H.at(i) > high.at(i)) ans++;
  }
  cout << ans << endl;
}