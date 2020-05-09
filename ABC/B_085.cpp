#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> d(N);
  for (auto &&e : d) cin >> e;

  sort(d.begin(), d.end(), std::greater<int>());

  int count = 0;
  double tmp = 101;
  for (auto i = 0; i < d.size(); ++i) {
    if (d.at(i) < tmp) {
      count++;
    }
    tmp = d.at(i);
  }
  cout << count << endl;
}