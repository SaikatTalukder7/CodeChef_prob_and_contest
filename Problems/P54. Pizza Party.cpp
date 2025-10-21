#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a, b;
    cin >> a >> b;
    int totalSlices = 4 * (a + 1) + 3 * b;
    int pizzasNeeded = ceil((double)totalSlices / 8);
    cout << pizzasNeeded << endl;

    return 0;
}
