#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> score; // 名前→成績
    score["Alice"] = 100;
    score["Bob"] = 89;
    score["Charlie"] = 95;

    cout << score.size() << endl;
    cout << score.at("Alice") << endl;   // Aliceの成績
    cout << score.at("Bob") << endl;     // Bobの成績
    cout << score.at("Charlie") << endl; // Daveの成績
    if (score.count("Alice"))
    {
        cout << "Alice: " << score.at("Alice") << endl;
    }
    if (score.count("Jiro"))
    {
        cout << "Jiro: " << score.at("Jiro") << endl;
    }
    for (pair<string, int> p : score)
    {
        string key = p.first;
        int value = p.second;
        cout << key << " " << value << endl;
    }
}
