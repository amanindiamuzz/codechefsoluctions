#include<bits/stdc++.h>
#define Int long long int
using namespace std;
void solve()
{
	//declaring the variables and storage variables;
	Int n,x,p;
	cin>>n>>x;
	Int arr[n];
	
	//taking the inputs n times;
	
	for(Int k=0;k<n;k++)
	{
		cin>>arr[k];
	}	
	
	//The main engine of xor
	Int i=0,j=1,V=1;
	{
		while(j<n && V<=x)
		{
			sort(arr,arr+(n-1));
		    while(arr[i]==0 && j<n)
    	    {
	    	    i++;j++;
	    	    
    	    }
    	        if(j<n)
	    	    {
	    	     	p=arr[i];
		        	arr[i]=(arr[i]^p);
			        arr[j]=(arr[j]^p);
			       
			        V++;
		 	    } 
		 	    else
		 	     {
		 	    	exit;
				 }
		}
		 for(int k=0;k<n;k++)
		 {
		 	cout<<arr[k]<<" ";
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
		cout<<endl;
	}
}
