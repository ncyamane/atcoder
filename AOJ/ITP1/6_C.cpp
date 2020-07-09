#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> res(4 * 3 * 10, 0);
  for (int i = 0; i < n; i++) {
    int b, f, r, v;
    cin >> b >> f >> r >> v;
    b--, f--, r--;
    res.at(b * 3 * 10 + f * 10 + r) += v;
  }
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 10; k++) {
        if (k < 9)
          cout << " " << res.at(i * 30 + j * 10 + k);
        else
          cout << " " << res.at(i * 30 + j * 10 + k) << endl;
      }
    }
    if (i == 3) break;
    cout << "####################" << endl;
  }
}