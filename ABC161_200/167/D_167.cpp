#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  int64_t K;
  cin >> N >> K;

  vector<int> A(N);
  for (auto i = 0; i < N; ++i) {
    cin >> A.at(i);
  }

  // 行き先
  vector<int> route;
  // 順番
  vector<int> order(N + 1, -1);
  int period = 1;
  int initial = 0;
  int tmp = 1;
  // まだ来ていないのならループ
  while (order.at(tmp) == -1) {
    order.at(tmp) = route.size();
    route.push_back(tmp);
    tmp = A.at(tmp - 1);
  }
  period = route.size() - order.at(tmp);
  initial = order.at(tmp);

  if (K < initial)
    cout << route.at(K) << endl;
  else
    cout << route.at(initial + (K - initial) % period) << endl;
}