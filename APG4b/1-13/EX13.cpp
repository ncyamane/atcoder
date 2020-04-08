#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> score(N);
    int sum = 0;
    for (int i = 0; i < score.size(); ++i)
    {
        cin >> score.at(i);
        sum += score.at(i);
    }

    int mean = sum / N;
    for (int i = 0; i < score.size(); ++i)
    {
        cout << abs(score.at(i) - mean) << endl;
    }
}
