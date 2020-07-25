#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  cin >> x;
  if (400 <= x && x <= 599) {
    cout << 8 << endl;
    return 0;
  } else if (600 <= x && x <= 799) {
    cout << 7 << endl;
    return 0;
  } else if (800 <= x && x <= 999) {
    cout << 6 << endl;
    return 0;
  } else if (1000 <= x && x <= 1199) {
    cout << 5 << endl;
    return 0;
  } else if (1200 <= x && x <= 1399) {
    cout << 4 << endl;
    return 0;
  } else if (1400 <= x && x <= 1599) {
    cout << 3 << endl;
    return 0;
  } else if (1600 <= x && x <= 1799) {
    cout << 2 << endl;
    return 0;
  } else if (1800 <= x && x <= 1999) {
    cout << 1 << endl;
    return 0;
  }
  return 0;
}