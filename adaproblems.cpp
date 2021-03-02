#include<bits/stdc++.h>
using namespace std;


int cook()
{

vector<int> maincontainer;
int n;
cin>>n;     
   
for(int i=0;i<n;i++)
{
	int input;
	cin>>input;
	maincontainer.push_back(input);	
}

sort(maincontainer.begin(),maincontainer.end(),greater<int>());

int time=0,subtime=0,i=0,j=1,element1=0,element2=0;

for(int k=0;k<n;k+2)
{

element1=maincontainer[i]-subtime;
element2=maincontainer[j];

time =element1;
subtime=element1-element2;
i=i+2;
j=j+2;
cout<<time;	
}

}






int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cook();
	}

}
