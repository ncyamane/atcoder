#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string h, t;
  int hanako = 0, taro = 0;
  for (int i = 0; i < n; i++) {
    cin >> h >> t;
    if (h < t)
      taro += 3;
    else if (h == t) {
      hanako++;
      taro++;
    } else
      hanako += 3;
  }
  cout << hanako << " " << taro << endl;
}