#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  for (auto &&e : a) cin >> e;

  sort(a.begin(), a.end(), std::greater<int>());

  int Alice = 0;
  int Bob = 0;

  for (auto i = 0; i < a.size(); ++i) {
    if (i % 2 == 0)
      Alice += a.at(i);
    else
      Bob += a.at(i);
  }

  cout << Alice - Bob << endl;
}