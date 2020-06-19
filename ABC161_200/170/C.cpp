#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, n;
  cin >> x >> n;
  if (n == 0) {
    cout << x << endl;
    return 0;
  }
  vector<int> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p.at(i);
  }
  sort(p.begin(), p.end());
  vector<int> cand;
  for (int i = 0; i < p.at(n) - p.at(0); i++) {
    cand.at(i) =
  }
  int ans;
}