#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  double dmean = (a + b) / 2.0;
  int imean = static_cast<int>(dmean);

  if (imean < dmean) {
    cout << imean + 1 << endl;
  } else if (imean == dmean) {
    cout << imean << endl;
  }
}