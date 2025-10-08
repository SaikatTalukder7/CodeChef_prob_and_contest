#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int md = 10000000;
        for (int j = 0; j < n; j++)
        {
            int x, y;
            cin >> x >> y;
            int dis = abs(a - x) + abs(b - y);
            if (dis < md)
            {
                md = dis;
            }
        }
        cout << md << endl;
    }
    return 0;
}
