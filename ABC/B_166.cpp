#include <bits/stdc++.h>
using namespace std;

int main() {
  set<int> kashi;

  int N, K;
  cin >> N >> K;

  vector<int> d(K);
  int tmp;
  for (int i = 0; i < K; ++i) {
    cin >> d.at(i);
    vector<int> A(d.at(i));
    for (int j = 0; j < d.at(i); ++j) {
      cin >> A.at(j);
    }
    for (int j = 0; j < d.at(i); ++j) {
      kashi.insert(A.at(j));
    }
  }
  cout << N - kashi.size() << endl;
}