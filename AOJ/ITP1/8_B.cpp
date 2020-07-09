#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  while (true) {
    string s;
    getline(cin, s);
    if (s.at(0) - '0' == 0) break;
    int count = 0;
    for (size_t i = 0; i < s.size(); i++) {
      int a = s.at(i) - '0';
      count += a;
    }
    cout << count << endl;
  }
}