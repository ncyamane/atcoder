#include <bits/stdc++.h>
using namespace std;

namespace A {
namespace B {
namespace C {
void f() { cout << "A::B::C::f" << endl; }
}  // namespace C
}  // namespace B
}  // namespace A

namespace too_long_name {
void f() { cout << "too_long_name::f" << endl; }
}  // namespace too_long_name

int main() {
  namespace abc = A::B::C;
  abc::f();

  namespace s = too_long_name;
  s::f();
}
