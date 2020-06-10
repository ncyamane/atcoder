#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, q;
  cin >> n >> m >> q;
  vector<int> prob(m, n);
  vector<int> score(n, 0);
  ;

  int command;
  for (int i = 0; i < q; ++i) {
    cin >> command;
    if (command == 1) {
      int p;
      cin >> p;
      cout << score.at(p) << endl;
    } else {
      int q, s;
      cin >> q >> s;
      solved.find(s) solved.insert(s);

      prob.at(s)--;
    }
  }
}