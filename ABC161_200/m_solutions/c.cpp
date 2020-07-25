#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> a.at(i);
  }

  bool ans;
  for (int i = k; i < n; i++) {
    if (a.at(i - k + 1) < a.at(i + 1)) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}