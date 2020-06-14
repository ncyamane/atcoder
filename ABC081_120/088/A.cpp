#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  int pay = N % 500;
  if (pay <= A) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}