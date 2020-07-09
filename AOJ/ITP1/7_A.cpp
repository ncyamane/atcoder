#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> score;
  while (true) {
    int m, f, r;
    cin >> m >> f >> r;
    if (m == -1 && f == -1 && r == -1)
      break;
    else if (m == -1 || f == -1)
      score.push_back("F");
    else if (m + f >= 80)
      score.push_back("A");
    else if (m + f >= 65)
      score.push_back("B");
    else if (m + f >= 50)
      score.push_back("C");
    else if (m + f >= 30)
      if (r >= 50)
        score.push_back("C");
      else
        score.push_back("D");
    else if (m + f < 30)
      score.push_back("F");
  }
  for (size_t i = 0; i < score.size(); i++) {
    cout << score.at(i) << endl;
  }
}