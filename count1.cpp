#include<bits/stdc++.h>
#define Int long long int
using namespace std;
void solve()
{
Int n;cin>>n;
Int a[n], i;
Int count=0;         
for(i=0; n>0; i++)    
{    
a[i]=n%2;    
n= n/2;  
if(a[i]==1)
{
	count++;
}
}  

 
cout<<count<<endl; 
}  

int main()
{
int t;cin>>t;
while(t--)
{
	solve();
}
}
