#include <bits/stdc++.h>
using namespace std;

int main() {
  uint64_t X;
  cin >> X;
  uint64_t m = 100;
  uint64_t count = 0;
  while (X > m) {
    m *= 1.01;
    count++;
  }
  cout << count << endl;
}