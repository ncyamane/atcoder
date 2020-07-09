#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, l;
  cin >> n >> m >> l;
  vector<int64_t> a(n * m), b(m * l), c(n * l, 0);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a.at(i * m + j);
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < l; j++) {
      cin >> b.at(i * l + j);
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < l; j++) {
      for (int k = 0; k < m; k++) {
        c.at(i * l + j) += a.at(i * m + k) * b.at(k * l + j);
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < l; j++) {
      if (j != l - 1)
        cout << c.at(i * l + j) << " ";
      else
        cout << c.at(i * l + j);
    }
    cout << endl;
  }
}