#include <bits/stdc++.h>
using namespace std;
void Saikat()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int count1 = 0, count2 = 0, count3 = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            count1++;
        }
        else if (arr[i] == 2)
        {
            count2++;
        }
        else if (arr[i] == 3)
        {
            count3++;
        }
    }
    int pp = 0;
    pp += count1 * (count1 - 1) / 2;
    pp += count1 * count2;
    pp += count2 * count3;

    cout << pp << endl;
}
int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        Saikat();
    }
    return 0;
}
