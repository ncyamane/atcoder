#include <bits/stdc++.h>
using namespace std;

int main() {
  // 3ビットのビット列をすべて列挙する
  for (int tmp = 0; tmp < (1 << 4); tmp++) {
    bitset<4> s(tmp);
    // ビット列を出力
    cout << s << endl;
  }
}
