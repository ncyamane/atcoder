#include <bits/stdc++.h>
using namespace std;

int main() {
  uint32_t *p;

  // uint32_t型の変数10個分だけ(つまり4*10=40バイト分)ヒープ領域からメモリを確保する
  p = new uint32_t[10];

  // ポインタを介して使う
  uint32_t *tmp = p;  // アドレス値のコピー
  for (int i = 0; i < 10; i++) {
    *tmp = i;  // i番目にiを書き込む
    tmp++;     // 次の要素を指すように変更
  }

  tmp = p;  // pの位置に戻す
  for (int i = 0; i < 10; i++) {
    cout << *tmp << endl;
    tmp++;
  }

  // メモリを解放する(10個分連続で確保したのでdelete[]を使う)
  delete[] p;
}
