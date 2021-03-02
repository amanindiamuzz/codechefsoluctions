#include<bits/stdc++.h>
#define Int long long int
#define Test int t;cin>>t;while(t--)
#define Loop for(Int i=0;i<n;i++)
using namespace std;
void solve()
{
	Int n;cin>>n;
	string s,p;
	cin>>s;
	cin>>p;
	sort(s.begin(),s.end());
	sort(p.begin(),p.end());
	Int count=0;
	if(n==1)
	{
		cout<<"No"<<endl;
	}
	else if(n==2)
	{
		cout<<"Yes"<<endl;
	}
	
	else
	{
		Loop
	{
		if(s[i]==p[i])
		{
			count++;
		}
	}
	if(count==n)
	{
		cout<<"Yes"<<endl;
		
	}
	else
	{
		cout<<"No"<<endl;
	}
	}
}
	
int main()
{  
Test
	solve();
		
}
