#include <bits/stdc++.h>
using namespace std;

int main() {
  char ch;
  vector<int> strnum(26, 0);
  while (cin >> ch) {
    int num;
    if ('a' <= ch && ch <= 'z')
      num = ch - 'a';
    else if ('A' <= ch && ch <= 'Z')
      num = ch - 'A';
    else
      continue;
    strnum.at(num)++;
  }
  for (size_t i = 0; i < strnum.size(); i++) {
    cout << (char)(i + 97) << " : " << strnum.at(i) << endl;
  }
}