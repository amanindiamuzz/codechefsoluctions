#include<bits/stdc++.h>
#define Int long long int
#define Test int t;cin>>t;while(t--)
#define Loop for(Int i=0;i<n;i++)
using namespace std;
void solve()
{
  Int n,m;
  cin>>n>>m;
  Int arr[n][m];
  
  
  
  
  Loop
  {
  	for(Int j=0;j<m;j++)
  	
  	{
  		cin>>arr[i][j];
	}
  }
  
  
  
  Int q;
  cin>>q;
  Int count=0;
  
  
  for(Int i=0;i<q;i++)
  {
  	
  	
  	Int x,y,v;
  	cin>>x>>y>>v;
  	arr[x-1][y-1]=v;
  	
  	
  	for(Int j=0;j<n;j++)
  	{
  		
  		
  		for(int k=0;k<m;k++)
  		{
  			
  			
  			if(j==k)
  			{
  				
  				
  				
  				if(	arr[i][j]=v)
  				{
  					count++;
				}
  			
			}
  			
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
	for(Int j=0;j<n;j++)
  {
  	for(Int k=0;k<m;k++)
  	
  	{
  		cout<<arr[j][k];
	}
	cout<<endl;
  }
  	
  	
  }
  
   
  
  
}
	
int main()
{  
Test
	solve();
		
}
