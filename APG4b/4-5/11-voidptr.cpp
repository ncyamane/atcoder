#include <bits/stdc++.h>
using namespace std;

int main() {
  int x = 123;
  string y = "hello";
  double z = 4.5;

  // voidポインタの配列 順番に int*, string*, double* 型のポインタ
  vector<void *> ptrs = {&x, &y, &z};

  int *xp = (int *)ptrs[0];
  string *yp = (string *)ptrs[1];
  double *zp = (double *)ptrs[2];
  cout << *xp << endl;
  cout << *yp << endl;
  cout << *zp << endl;
}
