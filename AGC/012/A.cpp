#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(3 * n);
  for (int i = 0; i < n; ++i) {
    cin >> a.at(3 * i) >> a.at(3 * i + 1) >> a.at(3 * i + 2);
  }
  sort(a.begin(), a.end());

  int sum = 0;
  for (int i = 0; i < n; ++i) {
    sum += a.at(n + 2 * i);
  }
  cout << sum << endl;
}