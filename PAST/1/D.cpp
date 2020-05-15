#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> a(N + 1, 0);
  for (auto i = 0; i < N; ++i) {
    int tmp;
    cin >> tmp;
    a.at(tmp)++;
  }

  int none = 0;
  int twice = 0;
  for (auto i = 1; i < N + 1; ++i) {
    if (a.at(i) == 0) {
      none = i;
    } else if (a.at(i) == 2) {
      twice = i;
    }
  }
  if (none == 0 && twice == 0) {
    cout << "Correct" << endl;
  } else {
    cout << twice << " " << none << endl;
  }
}