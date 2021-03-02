#include<bits/stdc++.h>
#define Int long long int
#define Float long long float
using namespace std;
int main()
{
	int x;float y;
	cin>>x>>y;
	if(x%5==0)
	{
		if(x<=y-.50)
		{
			y=y-(x+.50);
		}
	}
	cout<<fixed<<setprecision(2)<<y;
}
