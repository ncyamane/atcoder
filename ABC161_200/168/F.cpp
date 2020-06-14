#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> a(n + 1), b(n + 1), c(n + 1);
  for (int i = 0; i < n; ++i) {
    cin >> a.at(i) >> b.at(i) >> c.at(i);
  }
  vector<int> d(m + 1), e(m + 1), f(m + 1);
  for (int i = 0; i < m; ++i) {
    cin >> d.at(i) >> e.at(i) >> f.at(i);
  }
}