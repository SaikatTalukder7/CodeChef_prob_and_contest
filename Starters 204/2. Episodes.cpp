#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T; 
    cin>>T;
    for (int i = 0; i < T; i++)
    {
        int N; 
        int K; 
        cin >> N;
        cin >> K;
        int th = N * K;
        int H = th / 60;
        int M = th % 60;
        cout << H << " " << M << endl;
    }

    return 0;
}
