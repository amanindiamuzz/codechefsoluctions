#include<bits/stdc++.h>
#define Int long long int
using namespace std;
int main()
{
	Int d1,v1,d2,v2,p;
	cin>>d1>>v1>>d2>>v2>>p;
	pair<Int,Int> comp1(d1,v1);
	pair<Int,Int> comp2(d2,v2);
	pair<Int ,Int> max_comp=max(comp1,comp2);
	pair<Int ,Int> min_comp=min(comp1,comp2);
	Int day1=min_comp.first,day2=max_comp.first,sum=0;
	Int day=1;
	if(d1==d2)
	{
		day=d1;
		while(sum<p)
		{
			sum=v1+v2+sum;
			if(sum<p)
			{
				day++;
			}
		}
		cout<<day<<endl;
	
	}
	
	else
	{
	day=day1;
	 while(sum<p)
	 {
        if(day1<day2)
        {
        	sum=sum+min_comp.second;
        	if(sum<p)
        	{
        		day1++;
        		day++;
			}
        	
		}
		else
		{
			sum=sum+v1+v2;
			if(sum<p)
			{
				day++;
			}
		}
	 }
	 cout<<day<<endl;	
	}
	
}
