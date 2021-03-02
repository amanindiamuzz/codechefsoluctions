#include<bits/stdc++.h>
#define Int long long int
using namespace std;
void solve()
{
	Int a,b,ans=0;cin>>a>>b;
	if(a%2==0 && b%2==0)
	{
		ans=(((a/2)*(b/2))+((a/2)*(b/2)));
	}
	
	else if(a%2==0 && b%2!=0)
	{
		ans=(((a/2)*(b/2))+((a/2)*((b/2)+1)));
	}
	else if(a%2!=0 && b%2==0)
	{
		ans=(((a/2)*(b/2))+(((a/2)+1)*(b/2)));
	}
	else
	{
		ans=(((a/2)*(b/2))+(((a/2)+1)*((b/2)+1)));
	}
	cout<<ans<<endl;
	}
	
	
int main()
{
	int t;cin>>t;
	while(t--)
	{
		solve();
	}
}
