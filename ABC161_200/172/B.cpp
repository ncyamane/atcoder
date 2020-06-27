#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  int change = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s.at(i) != t.at(i)) change++;
  }
  cout << change << endl;
}