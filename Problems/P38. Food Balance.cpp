#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int n = abs(a-b);
    int m = abs(c-d);
    if(n>m)
    {
        cout<<"Second";
    }
    else if(n == m)
    {
        cout<<"Both";
    }
    else
    {
        cout<<"First";
    }
}
