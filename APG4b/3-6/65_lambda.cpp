#include <bits/stdc++.h>
using namespace std;

int main() {
  // my_min関数をラムダ式で定義
  auto my_min = [](int a, int b) {
    if (a < b) {
      return a;
    } else {
      return b;
    }
  };

  cout << my_min(5, 10) << endl;
}
