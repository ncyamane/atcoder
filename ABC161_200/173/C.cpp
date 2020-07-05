#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w, k;
  cin >> h >> w >> k;
  vector<string> c(h);
  for (int i = 0; i < h; i++) {
    cin >> c.at(i);
  }

  int black = 0;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < c.at(i).size(); j++) {
      if (c.at(i).at(j) == "#") black++;
    }
  }
}