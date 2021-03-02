#include<bits/stdc++.h>
#define Int long long int
#define Test int t;cin>>t;while(t--)
#define Loop for(Int i=0;i<n;i++)
using namespace std;
void solve()
{
	int n,q;
	cin>>n>>q;
	int cities[n]={0};
	
	
	int conta[q*2]={0};
	
	int g=0;
	for(int i=0;i<q;i++)
	{
		
	int l,r;
	cin>>l>>r;
	cont[g]=l;cont[g+1]=r;
	g=g+2;
	
	}
	
	for(int i=;i<q*2;i++)
	{
	cities[i-1]=cities[j-1]+((j-l)+1);	
	}
	
	
	
	for(int i=0;i<n;i++)
	{
		cout<<cities[i]<<" ";
	}
	cout<<endl;
	
	}
	
int main()
{
	Test
	{
		solve();
	}
}
