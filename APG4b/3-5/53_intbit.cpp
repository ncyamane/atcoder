#include <bits/stdc++.h>
using namespace std;

int main() {
  int x = 5;   // 0101
  int y = 10;  // 1010
  // if (x & y > 0) { // &演算子よりも>演算子の優先度の方が高いので x & (y > 0)
  // と解釈される

  if (x & y > 0) {
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;
  }
  if ((x & y) > 0) {
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;
  }
}
