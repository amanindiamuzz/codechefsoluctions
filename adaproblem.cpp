#include<iostream>
#include<vector>
using namespace std;

void Mrmachine(int no)
{
	float sum=0;
	int number[5];
	for(int i=1;i<=no;i++)
	{
		cin>>number[i];
		sum=sum+(number[i]/4);
	}
	
	
	float p=sum/4;
	cout<<p;
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	Mrmachine(n);
	}

}
