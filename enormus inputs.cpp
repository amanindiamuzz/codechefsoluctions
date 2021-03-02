#include<bits/stdc++.h>
#define Int long long int
using namespace std;
int main()
{
	Int n,k;
	cin>>n>>k;
	Int count=0;
	for(Int i=0;i<n;i++)
	{
		Int a;
		cin>>a;
		if(a%k==0)
		{
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
