#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int count = 0;
  for (int i = a; i < b + 1; ++i) {
    string s = to_string(i);
    string tmp = s;
    reverse(s.begin(), s.end());
    if (tmp == s) count++;
  }
  cout << count << endl;
}