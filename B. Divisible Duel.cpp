#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        int x, y;
        cin >> x >> y;
        int sumEven = 0;
        int sumOdd = 0;
        for (int i = x; i <= y; i++)
        {
            if (i % x == 0)
            {
                if (i % 2 == 0)
                {
                    sumEven += i;
                }
                else
                {
                    sumOdd += i;
                }
            }
        }
        if (sumEven >= sumOdd)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
