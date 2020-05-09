#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  vector<string> origin = {"dream", "dreamer", "erase", "eraser"};

  reverse(s.begin(), s.end());

  for (auto i = 0; i < origin.size(); ++i)
    reverse(origin.at(i).begin(), origin.at(i).end());

  bool answer = true;
  for (auto i = 0; i < s.size();) {
    answer = false;
    for (auto j = 0; j < origin.size(); ++j) {
      if (s.substr(i, origin.at(j).size()) == origin.at(j)) {
        i += origin.at(j).size();
        answer = true;
      }
    }
    if (!answer) break;
  }

  if (answer) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}