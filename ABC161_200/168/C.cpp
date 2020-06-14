#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, h, m;
  cin >> a >> b >> h >> m;

  double degree = abs(h * 30 + m * 0.5 - m * 6);
  degree *= 2 * M_PI / 360;
  double c = sqrt(a * a + b * b - 2 * a * b * cos(degree));
  cout << fixed << setprecision(15) << c << endl;
}