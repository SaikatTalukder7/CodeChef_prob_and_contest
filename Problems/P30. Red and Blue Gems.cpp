#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int r,b,p,q;
	cin>>r>>b>>p>>q;
	int n = r*p;
	int m = b*q;
	if(n>m)
	{
	    cout<<n;
	}
	else
	{
	    cout<<m;
	}
}
