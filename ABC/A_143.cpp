#include <bits/stdc++.h>

int main() {
    int A, B, C;
    std::cin >> A;
    std::cin >> B;
    C = A - 2*B;
    if(C < 0)
    {
        std::cout << 0 << std::endl;
    }
    else
    {
        std::cout << C << std::endl;
    }
}