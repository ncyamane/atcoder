#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(10001);
  int count = 0;
  while (true) {
    int tmp;
    cin >> tmp;
    if (tmp == 0) break;
    a.at(count) = tmp;
    count++;
  }

  for (int i = 0; i < count; i++) {
    cout << "Case " << i + 1 << ": " << a.at(i) << endl;
  }
}