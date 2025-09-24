#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int N, K;
        cin >> N >> K;
        if (N == K)
        {
            cout << 0 << endl;
        }
        else
        {
            int d = N - K;
            int m = K;
            int result = min(d, m);
            cout << result << endl;
        }
    }
    return 0;
}
