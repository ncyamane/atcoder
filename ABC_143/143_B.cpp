#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> takoyaki(N);
    for (int i = 0; i < N; i++) cin >> takoyaki[i];
    int sum;
    for (int i = 0; i < N-1; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            sum += takoyaki[i]*takoyaki[j];
        }
        
    }
    
    cout << sum << endl;

    return 0;
}