#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n * m, 0);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a.at(i * m + j);
    }
  }
  vector<int> b(m, 0);
  for (int i = 0; i < m; i++) {
    cin >> b.at(i);
  }
  vector<int> c(n, 0);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      c.at(i) += a.at(i * m + j) * b.at(j);
    }
  }
  for (int i = 0; i < n; i++) cout << c.at(i) << endl;
}