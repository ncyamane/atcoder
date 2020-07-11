#include <bits/stdc++.h>
using namespace std;

bool is_integer(double x) { return std::floor(x) == x; }

int ans(int num) {
  int count = 0;
  for (int i = 2; i <= sqrt(2 * num); i++) {
    for (int j = 2; j <= sqrt(2 * num); j++) {
      int k2 = 2 * num - i * i - j * j;
      if (k2 <= 0) continue;
      double k = sqrt(2 * num - i * i - j * j);
      if (is_integer(k) && 2 <= k && k <= sqrt(2 * num)) {
        if (2 + i <= j + k && 2 + j <= i + k && 2 + k <= i + j) count++;
      }
    }
  }
  return count;
}

int main() {
  int num;
  cin >> num;
  for (int i = 1; i <= num; i++) {
    cout << ans(i) << endl;
  }
  return 0;
}