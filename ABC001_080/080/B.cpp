#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int sum = 0;
  int b = n;
  for (int i = 0; i < 8; ++i) {
    sum += b % 10;
    b /= 10;
  }

  if (n % sum == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}