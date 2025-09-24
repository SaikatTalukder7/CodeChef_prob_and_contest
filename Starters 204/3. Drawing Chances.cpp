#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int j = 0; j < T; j++)
    {
        int N;
        int M;
        cin >> N;
        cin >> M;
        string S;
        cin >> S;
        int AliceW = 0;
        int BobW = 0;
        for (int i = 0; i < M; i++)
        {
            if (S[i] == '1')
            {
                AliceW++;
            }
            else
            {
                BobW++;
            }
        }
        int r = N - M;

        int x = (BobW - AliceW + r) / 2;

        if ((BobW - AliceW + r) % 2 == 0 && x >= 0 && x <= r)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
