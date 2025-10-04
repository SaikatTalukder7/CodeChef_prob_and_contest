#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    int notes[] = {100, 50, 10, 5, 2, 1};

    for(int i = 0; i < t; i++) 
    {
        int amount;
        cin >> amount;
        int count = 0;

        for (int j = 0; j < 6; j++) 
        {
            count += amount / notes[j];
            amount = amount % notes[j];
        }
        cout << count << endl;
    }
    return 0;
}
