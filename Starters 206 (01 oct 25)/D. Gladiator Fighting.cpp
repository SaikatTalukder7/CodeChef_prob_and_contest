#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int mSum;
        if (n == 2)
        {
            mSum = 0;
        }
        else
        {
            mSum = n - 2;
        }
        int mxSum = (n - 1) * (n - 2) / 2;
        cout << mSum << " " << mxSum << endl;
    }
    return 0;
}
