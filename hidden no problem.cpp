#include<bits/stdc++.h>
#define Int long long int
using namespace std;

void solve()
{
	Int n;
	cin>>n;
    if(n==1)
    {
    	cout<<n<<" "<<n<<endl;
	}
	
	else if(n%2==0)
	{
		Int a;
		a=n/2;
		cout<<2<<" "<<a<<endl;
	}
	
	else if(n%2!=0)
	{
		cout<<"1"<<" "<<n<<endl;
	}

}
int main()
{
	Int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	
}
