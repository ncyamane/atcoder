#include <bits/stdc++.h>
using namespace std;

int main() {
  uint8_t x = 1;

  uint8_t *p;
  p = &x;  // ポインタの内容をxのアドレスで初期化
  cout << &x << endl;
  cout << reinterpret_cast<void *>(p) << endl;  // ポインタの内容を出力
  printf("%p\n", p);
}
