#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  vector<vector<int> > a(3001, vector<int>(2));
  int count = 0;
  while (true) {
    cin >> x >> y;
    if (x == 0 && y == 0)
      break;
    else if (x <= y)
      a.at(count).at(0) = x, a.at(count).at(1) = y;
    else if (x > y)
      a.at(count).at(0) = y, a.at(count).at(1) = x;
    count++;
  }

  for (int i = 0; i < count; i++) {
    cout << a.at(i).at(0) << " " << a.at(i).at(1) << endl;
  }
}