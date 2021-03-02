#include<bits/stdc++.h>
#define Int long long int
using namespace std;
int main()
{
	Int n,m;cin>>n>>m;
	Int a[n],b[n];
	for(Int i=0;i<n;i++) cin>>a[i];
	for(Int i=0;i<m;i++) cin>>b[i];
	sort(a,a+n);
	sort(b,b+m);
	Int count=0;
	for(Int i=0;i<m;i++)
	{
		if(b[i]<a[0])
		{
			count+=n;
		}
	}
	cout<<count<<endl;
	return 0;
}

