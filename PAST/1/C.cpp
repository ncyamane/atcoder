#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(6);
  for (auto &&e : a) cin >> e;

  sort(a.begin(), a.end());

  cout << a.at(3) << endl;
}