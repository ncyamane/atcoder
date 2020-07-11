#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin >> str;
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    string cmd;
    cin >> cmd;
    if (cmd == "print") {
      int a, b;
      cin >> a >> b;
      cout << str.substr(a, b - a + 1) << endl;
    } else if (cmd == "reverse") {
      int a, b;
      cin >> a >> b;
      string tmp = str.substr(a, b - a + 1);
      reverse(tmp.begin(), tmp.end());
      str.replace(a, b - a + 1, tmp);
    } else if (cmd == "replace") {
      int a, b;
      cin >> a >> b;
      string p;
      cin >> p;
      str.replace(a, b - a + 1, p);
    }
  }
}