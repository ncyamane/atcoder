#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> s(N);
  set<string> score;
  for (int i = 0; i < s.size(); ++i) {
    cin >> s.at(i);
    score.insert(s.at(i));
  }
  cout << score.size() << endl;
}