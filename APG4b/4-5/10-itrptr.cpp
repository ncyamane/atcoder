#include <bits/stdc++.h>
using namespace std;

int main() {
  // イテレータを用いて順番にアクセス
  vector<int> a = {1, 2, 3};
  for (auto it = a.begin(); it != a.end(); it++) {
    cout << *it << endl;
  }

  // ポインタを用いて順番にアクセス
  vector<int> b = {1, 2, 3};
  // b.data() ... bのデータの先頭アドレスを返す(&b[0] と同じ)
  int *begin_addr = b.data();
  for (int *ptr = begin_addr; ptr < begin_addr + 3; ptr++) {
    cout << *ptr << endl;
  }
}
