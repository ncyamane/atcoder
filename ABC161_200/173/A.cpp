#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  cin >> a;
  if (a % 1000 == 0) {
    cout << 0 << endl;
  } else {
    cout << (a / 1000 + 1) * 1000 - a << endl;
  }
}