#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define Int long long
int main()
{
int T;cin>>T;
for(int t=1;t<=T;t++)
{

Int N,K,S;cin>>N>>K>>S;
Int Ans;
Ans=min(N+1,(K-S)+(N-S)+1)+(K-1);
cout<<"Case #"<<t<<": "<<Ans<<endl;
}
}
