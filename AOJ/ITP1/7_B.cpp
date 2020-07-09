#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> sumcount;
  while (true) {
    int n, x, count = 0;
    cin >> n >> x;
    if (n == 0 && x == 0) break;
    for (int i = 1; i <= n; i++) {
      for (int j = i + 1; j <= n; j++) {
        if (x - i - j <= n && j < x - i - j) count++;
      }
    }
    sumcount.push_back(count);
  }
  for (size_t i = 0; i < sumcount.size(); i++) {
    cout << sumcount.at(i) << endl;
  }
}