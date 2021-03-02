#include<iostream>
#define Int long long int
using namespace std;

void solve()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    
     int car_fuel=arr[0];
     int count=0;
     if(car_fuel>0)
     {
     for(int i=1;i<N;i++)
     {
         if(car_fuel>0)
         {
             car_fuel=(car_fuel+arr[i])-1;
             count++;
         }
             
     }
         cout<<count+car_fuel<<endl;
}
else
{
    cout<<arr[0]<<endl;
}
    
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }

}

