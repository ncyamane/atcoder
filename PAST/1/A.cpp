#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  vector<int> d = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  bool check = true;
  for (int i = 0; i < 3; ++i) {
    if (!isdigit(s.at(i))) {
      check = false;
      break;
    }
  }

  if (check) {
    int a = stoi(s);
    cout << 2 * a << endl;
  } else {
    cout << "error" << endl;
  }
}