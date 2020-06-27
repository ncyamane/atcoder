#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> a(n), b(m);
  for (int i = 0; i < n; i++) cin >> a.at(i);
  for (int i = 0; i < m; i++) cin >> b.at(i);

  int64_t restime = 0;
  int ai = 0, bi = 0;
  int c;
  while (restime <= k) {
    bool flaga = false;
    bool flagb = false;
    if (ai + 1 < n && bi + 1 < m) {
      c = min(a.at(ai), b.at(bi));
      if (c == a.at(ai))
        flaga = true;
      else
        flagb = true;
    } else if (ai + 1 == n && bi + 1 < m) {
      c = min(a.at(n), b.at(bi));
      if (c == a.at(n))
        flaga = true;
      else
        flagb = true;
      flagb = true;
    } else if (ai + 1 < n && bi + 1 == m) {
      c = min(a.at(ai), b.at(m));
      if (c == a.at(n))
        flaga = true;
      else
        flagb = true;
    } else if (ai + 1 == n && bi + 1 == m) {
      c = min(a.at(n), b.at(m));
      if (c == a.at(n))
        flaga = true;
      else
        flagb = true;
    } else
      break;

    if (k < c - restime) break;
    if (flaga)
      ai++;
    else if (flagb)
      bi++;
    restime += c;
  }
  cout << ai + bi << endl;
}