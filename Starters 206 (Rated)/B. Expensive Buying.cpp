#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        int n,k;
        cin>>n>>k;
        vector<int> p(n);
        for (int i=0; i<n; i++)
        {
            cin >> p[i];
        }
        sort(p.rbegin(), p.rend());
        int tCost = 0;
        for (int i=0; i<k; i++)
        {
            tCost += p[i];
        }
        cout << tCost << endl;
    }
    return 0;
}
