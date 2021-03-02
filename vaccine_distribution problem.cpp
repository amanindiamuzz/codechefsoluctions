#include<bits/stdc++.h>
#define Int long long int
using namespace std;
int main()
{
	Int t;cin>>t;
	while(t--)
	{
		Int n,d;
		cin>>n>>d;
		Int a=0,b=0;
		Int ans=0;
		for(Int i=0;i<n;i++)
		{
			Int p;
			cin>>p;
			if(p<80 && p>9)
			{
				b++;	
			}	
			else
			{
				a++;
			
			}
		}
		
	
	if(a==0 && b<=d)
	{
		ans=1;
	}
	else if(a==0 && b>d)
	{
		if(b%d==0)
		{
			ans=b/d;	
		}
		else
		{
			ans=b/d+1;
		}

	}
	else if(a==0 && b<=d)
	{
		ans=1;
	}
	else if(b==0 && a>d)
	{
		if(a%d==0)
		{
		ans=a/d;	
		}
		else
		{
			ans=a/d+1;
		}
		
	}
	else if(a<=d && b<=d)
	{
		ans=2;
	}
	
	else if(a<=d && b>d)
	{
		if(b%d==0)
		{
			ans=1+(b/d);
		}
		else
		{
			ans=2+(b/d);
		}
	}
	else if(b<=d && a>d)
	{
		if(a%d==0)
		{
			ans=1+(a/d);
		}
		else
		{
			ans=2+(a/d);
		}
		
	}
	else if(a%d==0 && b%d==0)
	{
		ans=a/d+b/d;
	}
	
	else if(a%d==0 && b%d!=0)
	{
		ans=(a/d)+(b/d)+1;
	}
	else if(a%d!=0 && b%d==0)
	{
		ans=(a/d)+1+(b/d)+1;
	}
	else
	{
		ans=(a/d)+1+(b/d)+1;
	}
		
		
		cout<<ans<<endl;
	}
}
