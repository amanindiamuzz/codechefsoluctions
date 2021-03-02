#include<bits/stdc++.h>
#define Int long long int
#include<string>
using namespace std;
int main()
{
	Int t;cin>>t;
	char ch;
	while(t--)
	{
		
	Int n;cin>>n;
	list<char> cha;
	for(Int i=0;i<n;i++)
	{
	cin>>ch;
	
	if(ch=='b')
	{
	  	cha.push_front(ch);
	}		
	}	
	Int *next;
	for(Int i=0;i<n;i++)
	{
		cout<<cha->next;
		next++;
	}
	
	}
	
	
}
