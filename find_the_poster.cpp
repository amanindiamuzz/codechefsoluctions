#include<bits/stdc++.h>
#define Int long long int
using namespace std;
void solve()
{
	Int n;cin>>n;Int arr[n],arr1[n+1];
	for(Int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(Int i=0;i<n+1;i++)
	{
		cin>>arr1[i];
	}
	for(Int i=0;i<n+1;i++)
	{
		if(arr1[i]!=arr[i])
		{
			cout<<arr1[i];
			break;
		}
		
	}
}
int main()
{
	solve();
}
