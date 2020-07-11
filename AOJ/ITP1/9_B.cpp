#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  while (cin >> str) {
    if (str == "-") break;
    int m, h;
    cin >> m;
    for (int i = 0; i < m; i++) {
      cin >> h;
      str = str.substr(h, str.size() - h) + str.substr(0, h);
    }
    cout << str << endl;
  }
}