#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, sum;
    cin >> N;
    vector<int> m(N);
    for(int i = 0; i < N; i++) cin >> m[i];

    for (int i = 0; i < N-2; i++)
    {
        for(int j = i+1; j < N-1; j++)
        {
            for(int k = j + 1; k < N; k++)
            {
                if (m[i] < m[j] + m[k] && m[j] < m[k] + m[i] && m[k] < m[i] + m[j])
                {
                    sum += 1;
                }
                else
                {
                    sum += 0;
                }

            }
        }
    }
    
    std::cout << sum << endl;

    return 0;
}