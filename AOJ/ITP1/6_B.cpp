#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<bool> sp(13, false), he(13, false), cl(13, false), di(13, false);
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    int num;
    cin >> num;
    if (s == "S")
      sp.at(num - 1) = true;
    else if (s == "H")
      he.at(num - 1) = true;
    else if (s == "C")
      cl.at(num - 1) = true;
    else if (s == "D")
      di.at(num - 1) = true;
  }
  for (int i = 0; i < 13; i++) {
    if (sp.at(i) == false) {
      cout << "S " << i + 1 << endl;
    }
  }
  for (int i = 0; i < 13; i++) {
    if (he.at(i) == false) {
      cout << "H " << i + 1 << endl;
    }
  }
  for (int i = 0; i < 13; i++) {
    if (cl.at(i) == false) {
      cout << "C " << i + 1 << endl;
    }
  }
  for (int i = 0; i < 13; i++) {
    if (di.at(i) == false) {
      cout << "D " << i + 1 << endl;
    }
  }
}