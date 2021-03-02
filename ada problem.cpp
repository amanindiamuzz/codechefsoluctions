#include<bits/stdc++.h>
#define Int long long int
using namespace std;
void solve()
{
	Int n;cin>>n;
	Int a[n],sum=0;
		
	//taking the inputs
	for(Int i=0;i<n;i++)
	{
		cin>>a[i];
    }
    
    sort(a,a+n,greater<Int>());
    if(n==1 || n==2)
    {
    	cout<<a[0]<<endl;
	}
	
	if(n==3)
	{	
	   if((a[1]+a[2])<=a[0]) cout<<a[0]<<endl;
	   else cout<<((a[1]+a[2])-a[0])+a[0]<<endl;
	}
	
	if(n==4)
	{
		if(a[0]==a[1]==a[2]==a[3]) cout<<2*a[0]<<endl;
		
		if(a[0]>(a[1]+a[2]+a[3])) cout<<a[0]<<endl;
		
		else
		{
			Int sum=a[0]+a[1]+a[2]+a[3];
			if(sum%2==0)
			{
				sum=sum/2;
			}
			else
			{
				sum=(sum/2)+1;
			}
			cout<<sum;
		}
	}
	
	

}
int main()
{
	int t;cin>>t;while(t--){
		solve();
	}
}
