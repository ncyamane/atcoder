#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (auto i = 0; i < A.size(); i++) {
    cin >> A.at(i);
  }

  for (auto i = 0; i < N - 1; ++i) {
    int old = A.at(i);
    int newnum = A.at(i + 1);
    if (newnum == old) {
      cout << "stay" << endl;
    } else if (newnum < old) {
      cout << "down " << old - newnum << endl;
    } else {
      cout << "up " << newnum - old << endl;
    }
  }
}