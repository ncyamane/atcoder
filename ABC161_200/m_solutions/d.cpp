#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> a.at(i);
  }

  int money = 1000;
  for (int i = 1; i < n; i++) {
    if (a.at(i) < a.at(i + 1)) {
      int stock = money / a.at(i);
      money -= stock * a.at(i);
      money += stock * a.at(i + 1);
    }
  }

  cout << money << endl;
}