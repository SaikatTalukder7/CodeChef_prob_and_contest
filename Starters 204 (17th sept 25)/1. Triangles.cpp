#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    int y;
    cin >> x;
    cin >> y;
    int sum = x + y;
    if (sum < 180)
    {
        cout << 180 - sum;
    }
    else if (sum == 180)
    {
        cout << sum;
    }
    return 0;
}
