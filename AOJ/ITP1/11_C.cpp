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

int main() {
  Dice D, E;
  for (int i = 0; i < 6; i++) {
    cin >> D.num.at(i);
  }
  for (int i = 0; i < 6; i++) {
    cin >> E.num.at(i);
  }
  int a = E.num.at(0), b = E.num.at(1);
  if (a == D.Check(3))
    D.Roll('E');
  else if (a == D.Check(2))
    D.Roll('W');
  while (a != D.Check(0)) D.Roll('S');
  while (b != D.Check(1)) D.Roll('C');

  bool ans = D.Check(0) == E.Check(0) && D.Check(1) == E.Check(1) &&
             D.Check(2) == E.Check(2) && D.Check(3) == E.Check(3) &&
             D.Check(4) == E.Check(4) && D.Check(5) == E.Check(5);
  if (ans)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}