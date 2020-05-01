#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  cout << count(s.cbegin(), s.cend(), '1') << endl;
}