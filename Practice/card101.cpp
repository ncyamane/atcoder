#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t N;
  cin >> N;

  vector<int64_t> A(N), count(101);
  for (size_t i = 0; i < A.size(); ++i) {
    cin >> A.at(i);
    if (A.at(i) < 101) count.at(A.at(i))++;
  }

  int64_t answer = 0;
  for (int i = 1; i < 51; ++i) {
    answer += count.at(i) * count.at(101 - i);
  }
  cout << answer << endl;
}