// STLを使うためのincludeディレクティブ
#include <bits/stdc++.h>
using namespace std;

// b.cppの内容が展開される
#include "b.cpp"

int main() {
  // fの定義はb.cppに書かれている
  cout << f(10) << endl;
}
