#include <bits/stdc++.h>
using namespace std;

struct Dice {
 public:
  vector<int> num = vector<int>(6);
  vector<int> tmp = vector<int>(6);

  void Roll(char ch) {
    tmp = num;
    if (ch == 'S') {
      num.at(0) = tmp.at(4);
      num.at(1) = tmp.at(0);
      num.at(2) = tmp.at(2);
      num.at(3) = tmp.at(3);
      num.at(4) = tmp.at(5);
      num.at(5) = tmp.at(1);
    } else if (ch == 'W') {
      num.at(0) = tmp.at(2);
      num.at(1) = tmp.at(1);
      num.at(2) = tmp.at(5);
      num.at(3) = tmp.at(0);
      num.at(4) = tmp.at(4);
      num.at(5) = tmp.at(3);

    } else if (ch == 'N') {
      num.at(0) = tmp.at(1);
      num.at(1) = tmp.at(5);
      num.at(2) = tmp.at(2);
      num.at(3) = tmp.at(3);
      num.at(4) = tmp.at(0);
      num.at(5) = tmp.at(4);

    } else if (ch == 'E') {
      num.at(0) = tmp.at(3);
      num.at(1) = tmp.at(1);
      num.at(2) = tmp.at(0);
      num.at(3) = tmp.at(5);
      num.at(4) = tmp.at(4);
      num.at(5) = tmp.at(2);
    } else if (ch == 'C') {
      num.at(0) = tmp.at(0);
      num.at(1) = tmp.at(2);
      num.at(2) = tmp.at(4);
      num.at(3) = tmp.at(1);
      num.at(4) = tmp.at(3);
      num.at(5) = tmp.at(5);
    }
  }
  void Print(int n) { cout << num.at(n) << endl; }
  int Check(int a) { return num.at(a); }
};

bool same(Dice a, Dice b) {
  bool flag = false;

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      bool compd = a.num.at(0) == b.num.at(0) && a.num.at(1) == b.num.at(1) &&
                   a.num.at(2) == b.num.at(2) && a.num.at(3) == b.num.at(3) &&
                   a.num.at(4) == b.num.at(4) && a.num.at(5) == b.num.at(5);
      if (compd) {
        flag = true;
        break;
      }
      a.Roll('C');
    }
    if (flag) break;
    a.Roll('N');
  }
  a.Roll('E');
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      bool compd = a.num.at(0) == b.num.at(0) && a.num.at(1) == b.num.at(1) &&
                   a.num.at(2) == b.num.at(2) && a.num.at(3) == b.num.at(3) &&
                   a.num.at(4) == b.num.at(4) && a.num.at(5) == b.num.at(5);
      if (compd) {
        flag = true;
        break;
      }
      a.Roll('C');
    }
    if (flag) break;
    a.Roll('N');
  }
  return flag;
}

int main() {
  int n;
  cin >> n;
  vector<Dice> dice_vec(n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 6; j++) {
      cin >> dice_vec.at(i).num.at(j);
    }
  }
  bool ans;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      ans = same(dice_vec.at(i), dice_vec.at(j));
      if (ans) break;
    }
    if (ans) break;
  }

  if (!ans)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}