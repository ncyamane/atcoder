#include <bits/stdc++.h>
using namespace std;

int func(int i, int j, int n) {
  int ans = n * i + j;
  return ans;
}

int main() {
  int n, q;
  cin >> n >> q;

  int command;
  for (int i = 0; i < q; ++i) {
    int a, b;
    cin >> command;
    if (command == 1) {
    } else if (command == 2) {
    } else if (command = 3) {
    } else {
      cin >> a >> b;
      cout << func(a, b) << endl;
    }
  }
}