#include <bits/stdc++.h>
using namespace std;

const long long maxint = 1000000000000000000;

int main() {
  int N;
  cin >> N;

  long long ans = 1;
  for (int i = 1; i <= N; i++) {
    long long tmp;
    cin >> tmp;

    if (tmp == 0) {
      ans = 0;
      break;
    }
    if (tmp > maxint / ans) {
      ans = -1;
    }
    if (ans != -1) {
      ans *= tmp;
    }
  }

  cout << ans << endl;

  return 0;
}