#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;

  vector<vector<char>> f(N + 1, vector<char>(N + 1, 'N'));
  for (int i = 0; i < Q; ++i) {
    int command, user, follow;
    cin >> command;
    if (command == 1) {
      int user, follow;
      cin >> user >> follow;
      f.at(user).at(follow) = 'Y';
    } else if (command == 2) {
      cin >> user;
      for (int j = 1; j < N + 1; ++j) {
        if (f.at(j).at(user) == 'Y') {
          f.at(user).at(j) = 'Y';
        }
      }
    } else if (command == 3) {
      cin >> user;
      vector<int> flist;
      for (int j = 1; j < N + 1; ++j) {
        if (f.at(user).at(j) == 'Y') {
          flist.push_back(j);
        }
      }

      for (auto &&e : flist) {
        for (int k = 1; k < N + 1; ++k) {
          if (f.at(e).at(k) == 'Y' && k != user) {
            f.at(user).at(k) = 'Y';
          }
        }
      }
    }
  }

  for (int i = 1; i < N + 1; ++i) {
    f.at(i).at(i) = 'N';
  }

  for (int i = 1; i < N + 1; ++i) {
    for (int j = 1; j < N + 1; ++j) {
      cout << f.at(i).at(j);
    }
    cout << endl;
  }
}