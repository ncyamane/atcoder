#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  cout << a / b << " " << a % b << " " << std::fixed << std::setprecision(8)
       << (double)a / b << endl;
}