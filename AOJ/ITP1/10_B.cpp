#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b, c;
  cin >> a >> b >> c;
  double radc = c * M_PI / 180.0;
  double area = a * b * sin(radc) / 2;
  double h = 2 * area / a;
  double d = sqrt(a * a + b * b - 2 * a * b * cos(radc));
  double l = a + b + d;
  cout << fixed << setprecision(8) << area << endl;
  cout << fixed << setprecision(8) << l << endl;
  cout << fixed << setprecision(8) << h << endl;
}