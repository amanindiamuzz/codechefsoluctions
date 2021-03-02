#include<bits/stdc++.h>
#define Int long long int
using namespace std;

void solve()
{
	Int n,k; cin>>n>>k;
	
//Case 1 when k==0
    if(k==0)
    {
    	for(Int i=1;i<=n;i++)
    	{
    		cout<<-i<<" ";
		}
	}

//case 2 when k==n
    else if(k==n)
    {
     for(Int i=1;i<=n;i++)
    	{
    		cout<<i<<" ";
		}	
	}

//case 3 for even no
    else if(n%2==0)
    {
    	
    //case3.1 when k<=n/2
	    if(k<=(n/2))
		{
			Int count=0;
		    for(Int i=1;i<=n;i++)
			{
				cout<<-i<<" ";
				if(count<k)
				{
				    i++;
				    cout<<i<<" ";	
				    count++;
				}
					
			} 		
		}
	//case3.2 when k>n/2
	    else
		{
			Int count=0;
			for(Int i=1;i<=n;i++)
			{
				if(count<n-k)
				{
					cout<<-i<<" ";
					count++;
					i++;
				}
				cout<<i<<" ";
					
			} 
		}
		}
		
//case 4 when n is odd
    else
    {
    	if(k<(n+1)/2)
    	{
    	    Int count=0;
		    for(Int i=1;i<=n;i++)
			{
				cout<<-i<<" ";
				if(count<k)
				{
				    i++;
				    cout<<i<<" ";	
				    count++;
				}
					
			}	
		}
		else
		{
			Int count=0;
			for(Int i=1;i<=n;i++)
			{
				if(count<n-k)
				{
					cout<<-i<<" ";
					count++;
					i++;
				}
				cout<<i<<" ";
					
			} 
		}
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
