#include <bits/stdc++.h>
using namespace std;

void var(int n) {
  vector<int> score(n);
  double mean = 0;
  for (int i = 0; i < n; i++) {
    cin >> score.at(i);
    mean += score.at(i);
  }
  mean /= n;
  double variance = 0;
  for (int i = 0; i < n; i++) {
    variance += (score.at(i) - mean) * (score.at(i) - mean);
  }
  variance /= n;
  cout << fixed << setprecision(8) << sqrt(variance) << endl;
}

int main() {
  int n;
  while (cin >> n) {
    if (n == 0) break;
    var(n);
  }
}