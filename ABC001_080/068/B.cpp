#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  if (64 <= n) {
    cout << 64 << endl;
  } else if (32 <= n) {
    cout << 32 << endl;
  } else if (16 <= n) {
    cout << 16 << endl;
  } else if (8 <= n) {
    cout << 8 << endl;
  } else if (4 <= n) {
    cout << 4 << endl;
  } else if (2 <= n) {
    cout << 2 << endl;
  } else {
    cout << 1 << endl;
  }

  // int i = 1;
  // while(i <= n){
  //   i *=2;
  // }
  // cout << i/2 << endl;
}