#include <bits/stdc++.h>
using namespace std;

bool equalCharCaseInsensitiveFunction(const char& lhs, const char& rhs) {
  locale locale;
  return tolower(lhs, locale) == tolower(rhs, locale);
}

int main() {
  string w, t;
  cin >> w;
  int count = 0;
  while (cin >> t) {
    if (t == "END_OF_TEXT") break;
    bool equalchar =
        w.size() == t.size() &&
        equal(t.begin(), t.end(), w.begin(), equalCharCaseInsensitiveFunction);
    if (equalchar) count++;
  }
  cout << count << endl;
}