#include <bits/stdc++.h>
using namespace std;

void hello(string);

int main()
{
    hello("Tom");
    hello("C++");
}

// 返り値が無いのでvoidを指定
void hello(string text)
{
    cout << "Hello, " << text << endl;
    return;
}