#include <iostream>
using namespace std;

int main() 
{
    int x, y;
    cin >> x >> y;
    int n = 10*y;
    int m = x + n;
    if (m >= 100) 
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }
    return 0;
}
