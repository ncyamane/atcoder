#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int a = 200001, b = 0;
  for (int i = 0; i < s.size(); ++i) {
    if ('A' == s.at(i)) {
      if (i < a) a = i;
    } else if ('Z' == s.at(i)) {
      b = i;
    }
  }
  cout << b - a + 1 << endl;
}