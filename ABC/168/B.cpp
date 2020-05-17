#include <bits/stdc++.h>
using namespace std;

int main() {
  int K;
  cin >> K;

  string s;
  cin >> s;
  if (s.size() <= K) {
    cout << s << endl;
  } else {
    string output = s.substr(0, K) + "...";
    cout << output << endl;
  }
}