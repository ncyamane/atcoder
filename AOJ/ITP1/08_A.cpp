#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, str;
  getline(cin, str);
  stringstream ss{str};
  while (getline(ss, s)) {
    for (size_t i = 0; i < str.size(); i++) {
      char ch = str.at(i);
      if ('A' <= ch && ch <= 'Z')
        cout << (char)(ch + 32);
      else if ('a' <= ch && ch <= 'z')
        cout << (char)(ch - 32);
      else
        cout << ch;
    }
    cout << endl;
  }
}