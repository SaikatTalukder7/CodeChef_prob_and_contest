#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        int grp = (x + y) / 3;
        int score = grp + min(y, grp);
        cout << score << endl;
    }
    return 0;
}
