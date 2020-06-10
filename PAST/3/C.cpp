#include <bits/stdc++.h>
using namespace std;

const int maxint = (int64_t)1e9;

int main() {
  int64_t a, r, n;
  cin >> a >> r >> n;
  bool overflag = false;
  for (int i = 0; i < n - 1; i++) {
    if (a > maxint / r) {
      overflag = true;
      break;
    } else {
      a *= r;
    }
  }
  if (overflag)
    cout << "large" << endl;
  else
    cout << a << endl;
}