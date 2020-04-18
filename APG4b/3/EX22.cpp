#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N;
    cin >> N;

    using pii = pair<int, int>;
    vector<pii> input(N);
    for (auto &&x : input)
        cin >> x.second >> x.first;

    sort(input.begin(), input.end());

    for (auto &&x : input)
        cout << x.second << " " << x.first << endl;
}