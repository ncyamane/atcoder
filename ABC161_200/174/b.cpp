#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t n, d;
  cin >> n >> d;
  vector<int64_t> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i) >> b.at(i);
  }
  int count = 0;
  for (int i = 0; i < n; i++) {
    int64_t x = a.at(i) * a.at(i) + b.at(i) * b.at(i);
    if (x <= d * d) count++;
  }
  cout << count << endl;
}