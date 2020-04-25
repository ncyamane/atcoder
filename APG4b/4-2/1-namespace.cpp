#include <bits/stdc++.h>
using namespace std;

// 名前空間A
namespace A {
void f() { cout << "namespace A" << endl; }
}  // namespace A
// 名前空間B
namespace B {
void f() { cout << "namespace B" << endl; }
}  // namespace B

int main() {
  A::f();  // 名前空間A内の関数fの呼び出し
  B::f();  // 名前空間B内の関数fの呼び出し
}
