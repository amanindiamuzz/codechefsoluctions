#include<bits/stdc++.h>
#define Int long long int
using namespace std;
void machine()

{
	Int ans=0;
	string a,b;cin>>a>>b;
	for(Int i=0;i<a.length();i++)
	{
		if(a[i]!=b[i])
		ans++;
	}
	
	for(Int i=0;i<a.length()-2;i++)
	{
		if(a[i]!=b[i] && a[i+2]!=b[i+2])
		ans--;
	}
	
	cout<<ans;
	
}



int main()
{
	Int T;cin>>T;
	for(Int i=0;i<T;i++)
	{
		machine();
	}
}
