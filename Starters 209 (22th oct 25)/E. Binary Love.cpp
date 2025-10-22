#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count01 = 0;
        int count10 = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '0' && s[i + 1] == '1')
            {
                count01++;
            }
            if (s[i] == '1' && s[i + 1] == '0')
            {
                count10++;
            }
        }
        for (int i = 0; i < 1; i++)
        {
            if (count01 == count10 && count01 > 0)
            {
                cout << "Alice\n";
            }
            else if (count01 == 0 || count10 == 0)
            {
                cout << "Bob\n";
            }
            else
            {
                cout << "Alice\n";
            }
        }
    }
    return 0;
}
