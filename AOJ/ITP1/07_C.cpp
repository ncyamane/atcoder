#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, c;
  cin >> r >> c;
  int sum = 0;
  vector<int> table(r * c);
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> table.at(i * c + j);
      sum += table.at(i * c + j);
    }
  }
  vector<int> row(r, 0), column(c, 0);
  for (int i = 0; i < r; i++) {
    int count = 0;
    for (int j = 0; j < c; j++) {
      count += table.at(i * c + j);
    }
    row.at(i) = count;
  }
  for (int j = 0; j < c; j++) {
    int count = 0;
    for (int i = 0; i < r; i++) {
      count += table.at(i * c + j);
    }
    column.at(j) = count;
  }
  vector<int> anstable((r + 1) * (c + 1));
  for (int i = 0; i < r + 1; i++) {
    for (int j = 0; j < c + 1; j++) {
      if (i != r && j != c)
        anstable.at(i * (c + 1) + j) = table.at(i * c + j);
      else if (i == r && j != c)
        anstable.at(i * (c + 1) + j) = column.at(j);
      else if (i != r && j == c)
        anstable.at(i * (c + 1) + j) = row.at(i);
      else if (i == r && j == c)
        anstable.at(i * (c + 1) + j) = sum;
    }
  }
  for (int i = 0; i < r + 1; i++) {
    for (int j = 0; j < c + 1; j++) {
      if (j != c)
        cout << anstable.at(i * (c + 1) + j) << " ";
      else
        cout << anstable.at(i * (c + 1) + j);
    }
    cout << endl;
  }
}