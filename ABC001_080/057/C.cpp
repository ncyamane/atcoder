#include <bits/stdc++.h>
using namespace std;

template <typename T>
uint64_t Getdigit(T num) {
  uint64_t digit = 0;
  while (num != 0) {
    num /= 10;
    digit++;
  }
  return digit;
}

int main() {
  int64_t n;
  cin >> n;

  int ans = 11;
  for (int64_t i = 1; i <= (int64_t)sqrt(n); ++i) {
    int a = Getdigit(i);
    if (n % i == 0) {
      int b = Getdigit(n / i);
      ans = min(ans, max(a, b));
    }
  }
  cout << ans << endl;
}