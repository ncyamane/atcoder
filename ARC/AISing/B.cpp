#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  int count = 0;
  for (int i = 0; i < n; i++) {
    if ((i + 1) % 2 == 1 && a.at(i) % 2 == 1) count++;
  }
  cout << count << endl;
  return 0;
}