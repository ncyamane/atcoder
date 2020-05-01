#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);

  for (size_t i = 0; i < A.size(); ++i) {
    cin >> A.at(i);
  }

  int count = 0;
  while (all_of(A.begin(), A.end(), [](int i) { return i % 2 == 0; })) {
    for (size_t i = 0; i < A.size(); ++i) {
      A.at(i) /= 2;
    }
    count++;
  }

  cout << count << endl;
}