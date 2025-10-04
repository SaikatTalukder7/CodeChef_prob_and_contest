#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++) 
    {
        string n;
        cin >> n;
        int sum = (n[0] - '0') + (n.back() - '0');
        cout << sum << endl;
    }
    return 0;
}
