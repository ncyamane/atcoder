#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, k;
  cin >> a >> b >> c >> k;
  bool ans = false;

  for (int i = 0; i <= k; i++) {
    for (int j = 0; j <= k - i; j++) {
      int l = k - i - j;
      int tmp_a = pow(2, i) * a;
      int tmp_b = pow(2, j) * b;
      int tmp_c;
      if (l < 0) {
        tmp_c = c;
      } else {
        tmp_c = pow(2, l) * c;
      }
      if (tmp_a < tmp_b && tmp_b < tmp_c) {
        ans = true;
        break;
      }
    }
    if (ans) break;
  }

  if (ans) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}