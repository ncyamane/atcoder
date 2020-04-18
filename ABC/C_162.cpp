#include <bits/stdc++.h>
using namespace std;

void decompose(vector<int> &vec)
{
    int n = vec.at(0);
    for (int i = 0; i < vec.size(); ++i)
    {
        int a = 1;
        if (n < a * a)
            break;

        if (n % a == 0)
        {
            vec.at(i) = a;
            n /= a;
            if (a == 1)
            {
                a++;
            }
        }
        else
        {
            a++;
        }
    }
}

int main()
{
    int N;
    cin >> N;

    vector<vector<int>> A(N, vector<int>(N)), B(N, vector<int>(N)), C(N, vector<int>(N));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            A.at(i).at(0) = i;
            B.at(i).at(0) = i;
            C.at(i).at(0) = i;
            decompose(A.at(i));
            decompose(B.at(i));
            decompose(C.at(i));
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
        }
    }

    cout << N << endl;
    return 0;
}