#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, l;
  cin >> n >> l;
  vector<string> s(n);
  for (int i = 0; i < n; ++i) {
    cin >> s.at(i);
  }
  sort(s.begin(), s.end());
  string ans;
  for (int i = 0; i < n; ++i) {
    ans += s.at(i);
  }
  cout << ans << endl;
}