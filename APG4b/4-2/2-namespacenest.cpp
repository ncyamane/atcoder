#include <bits/stdc++.h>
using namespace std;

namespace A {
namespace B {
void f() { cout << "A::B::f" << endl; }
}  // namespace B
void f() { cout << "A::f" << endl; }
}  // namespace A

int main() {
  A::f();
  A::B::f();
  using namespace A;
  B::f();
}
