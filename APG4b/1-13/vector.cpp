#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> score = {25, 100, 64};
    cout << "1人目" << score.at(0) << endl; // 1つめである25を出力
    cout << "人数" << score.size() << endl; // 配列の長さである3を出力
    cout << "合計" << score.at(0) + score.at(1) + score.at(2) << endl;

    vector<int> add(3);

    for (int i = 0; i < add.size(); ++i)
    {
        cin >> add.at(i);
        score.push_back(add.at(i));
    }

    score.pop_back();

    for (int i = 0; i < score.size(); ++i)
    {
        cout << score.at(i) << endl;
    }
}
