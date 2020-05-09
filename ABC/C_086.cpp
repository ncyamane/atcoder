#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> x(N + 1), y(N + 1), t(N + 1);
  x.at(0) = 0;
  y.at(0) = 0;
  t.at(0) = 0;
  for (int i = 0; i < N; ++i) {
    cin >> t.at(i + 1) >> x.at(i + 1) >> y.at(i + 1);
  }

  bool answer = true;
  for (int i = 0; i < N; ++i) {
    int inter = t.at(i + 1) - t.at(i);
    int d = abs(x.at(i) - x.at(i + 1)) + abs(y.at(i) - y.at(i + 1));
    if (inter < d) {
      answer = false;
    }
    if (inter % 2 != d % 2) {
      answer = false;
    }
  }
  if (answer) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}