#include <bits/stdc++.h>
using namespace std;

const uint64_t maxint = 1000000000000000000;

int main() {
  int n;
  cin >> n;
  uint64_t tmp;
  uint64_t ans = 1;
  for (int i = 0; i < n; ++i) {
    cin >> tmp;
    ans *= tmp;
  }
  if (ans > maxint) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }
}