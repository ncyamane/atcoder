#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  int64_t sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
    sum += a.at(i);
  }
  sort(a.begin(), a.end());
  int minimum = a.front();
  int maximum = a.at(n - 1);
  cout << minimum << " " << maximum << " " << sum << endl;
}