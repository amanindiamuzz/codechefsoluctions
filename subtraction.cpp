#include<bits/stdc++.h>
#define Int long long int
using namespace std;
void solve()
{
	Int n,k;
	cin>>n>>k;
	while(k--)
	{
		if(n%10==0)
		{
			n=n/10;
		}
		else
		{
			n=n-1;
		}
	}
	cout<<n<<endl;
}
int main()
{
	solve();
}
