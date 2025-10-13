#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    if (!(cin >> T)) 
    {
        return 0;
    }
    while (T--) {
        int N;
        long long K;
        cin >> N >> K;
        vector<long long> P(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> P[i];
        }
        long long best_p = -1;
        long long min_moves = LLONG_MAX;

        for (long long p : P) 
        {
            if (K >= p) 
            {
                long long diff = K - p;
                if (diff % p == 0) 
                {
                    long long moves = diff / p;
                    if (moves < min_moves) 
                    {
                        min_moves = moves;
                        best_p = p;
                    }
                }
            }
        }
        cout << best_p << '\n';
    }
    return 0;
}
