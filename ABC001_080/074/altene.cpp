#include <math.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
const int INF = 1e9;
int main() {
  int A, B, C, D, E, F;
  double mx = -1;
  int max_ws = 0, max_su = 0;
  cin >> A >> B >> C >> D >> E >> F;
  // a,b,c,dは操作1,2,3,4の回数
  for (int a = 0; 100 * A * a <= F; ++a) {
    for (int b = 0; 100 * B * b <= F; ++b) {
      int s = (A * a + B * b) * E;  //水に溶ける砂糖の最大値
      for (int c = 0; C * c <= s; ++c) {
        for (int d = 0; D * d <= s; ++d) {
          int su = C * c + D * d;                   //砂糖の量
          int ws = 100 * A * a + 100 * B * b + su;  //全体量
          if (su > s) continue;
          if (ws > F) continue;
          if (mx < 100 * su / (double)ws) {
            mx = 100 * su / (double)ws;
            max_ws = ws;
            max_su = su;
          }
        }
      }
    }
  }
  cout << max_ws << " " << max_su << endl;
  return 0;
}