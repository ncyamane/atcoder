#include <bits/stdc++.h>
using namespace std;

int main() {
  int w, h, x, y, r;
  cin >> w >> h >> x >> y >> r;
  int left = x - r;
  int right = x + r;
  int lower = y - r;
  int upper = y + r;

  if (left < 0 || right > w || lower < 0 || upper > h) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
}