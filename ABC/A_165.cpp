#include <bits/stdc++.h>
using namespace std;

int main() {
  int K;
  int A, B;
  cin >> K;
  cin >> A >> B;

  for (int i = A; i < B + 1; ++i) {
    if (i % K == 0) {
      cout << "OK" << endl;
      break;
    } else if (i == B) {
      cout << "NG" << endl;
    }
  }
}