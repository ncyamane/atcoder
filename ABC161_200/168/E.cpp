#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n), b(n);
  for (int i = 0; i < n; ++i) {
    cin >> a.at(i) >> b.at(i);
  }

  int total = 0;
  vector<int> tmp;
  for (int s = 0; s < (1 << n); ++s) {
    total++;
    for (int i = 0; i < n; ++i) {
      // i番目のビットが建っているかどうか
      if ((s >> i) & 1) {
        tmp.push_back(i);
      }
    }

    for (int i = 0; i < tmp.size(); ++i) {
      for (int j = i + 1; j < tmp.size(); ++j) {
        int fav = a.at(tmp.at(i)) * a.at(tmp.at(j)) +
                  b.at(tmp.at(i)) * b.at(tmp.at(j));
        if (fav == 0) {
          total--;
          break;
        }
      }
    }

    tmp.clear();
    tmp.shrink_to_fit();
  }
  cout << total % 1000000007 << endl;
}