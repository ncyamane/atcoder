#include <bits/stdc++.h>
using namespace std;

bool is_integer(double x) { return std::floor(x) == x; }

int main() {
  int num;
  cin >> num;
  for (int i = 2; i <= sqrt(2 * num); i++) {
    for (int j = 2; j <= sqrt(2 * num); j++) {
      int k2 = 2 * num - i * i - j * j;
      if (k2 <= 0) continue;
      double k = sqrt(2 * num - i * i - j * j);
      if (is_integer(k))
        cout << "int " << i << " " << j << " " << k2 << " " << k << endl;
      else
        cout << "float " << k2 << " " << k << endl;
    }
  }
  return 0;
}