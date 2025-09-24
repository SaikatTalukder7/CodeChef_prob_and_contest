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
        int count1 = 0, count2 = 0;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                if (j % 2 == 1)
                {
                    count1++;
                }
                else
                {
                    count2++;
                }
            }
        }
        if (count1 > 0 && count2 > 0)
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }
    return 0;
}
