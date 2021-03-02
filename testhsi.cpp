#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;cin>>t;
while(t--)
  {
  	int n,k;cin>>n>>k;
  	int arr[n];
  	int count=0;
	  int small=arr[0];
  	for(int i=0;i<n;i++)
  	{
  		cin>>arr[i];
  		if(arr[i]>count)
	  	{
	  		count=arr[i];
		  }
	  	else if(arr[i]<=small)
	  	{
	  		small=arr[i];
		  }
	  }
	  
	  
	  
	  
	  if((count-small)<k)
	  {
	  	cout<<"YES"<<endl;
	  	
	  }
	  else
	  {
	  	cout<<"NO"<<endl;
	  }
  }

}

