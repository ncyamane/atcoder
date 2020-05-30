#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n), b(n);
  for (int i = 0; i < n; ++i) {
    cin >> a.at(i) >> b.at(i);
  }

  int distance, dist_max;
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      distance = (a.at(j) - a.at(i)) * (a.at(j) - a.at(i)) +
                 (b.at(j) - b.at(i)) * (b.at(j) - b.at(i));
      if (i == 0 && j == i + 1)
        dist_max = distance;
      else if (dist_max < distance)
        dist_max = distance;
    }
  }

  cout << fixed << setprecision(8) << sqrt(dist_max) << endl;
}