#include<bits/stdc++.h>
#define Int long long int
using namespace std;
void solve()
{
	Int k,l=0;cin>>k;
	Int arr[k]={0};
	arr[0]=0;
	arr[1]=1;
	for(Int i=2;i<k;i++)
	{
		arr[i]=arr[i-1]+arr[i-2];
		
	}
	
	for(Int i=0;i<k;i++)
	{
		for(Int j=0;j<=i;j++)
		{
			cout<<arr[j];
		}
		cout<<"\n";
	}
	
	
}


int main()
{
	Int t;cin>>t;while(t--) solve();
	
}
