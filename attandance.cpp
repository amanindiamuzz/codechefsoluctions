#include<bits/stdc++.h>
#define Int long long int
using namespace std;
void solve()
{
  Int n;cin>>n;
  string b;
  cin>>b;
  Int count=0;
  for(int i=0;i<b.length();i++)
  {
  	if(b[i]=='1')
  	{
  		count++;
	}
  }
  if(((120-n)+count)>=90)
  {
  	cout<<"YES"<<endl;
  }
  else
  {
  	cout<<"NO"<<endl;
  }
}
int main()
{
	int t;cin>>t;while(t--) solve();
}
