#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int a,b,c;
	cin>>a>>b>>c;
	int n = b*c;
	if(a<n)
	{
	    cout<<-1<<endl;
	}
	else
	{
	    cout<<a-n<<endl;
	}
	return 0;
}
