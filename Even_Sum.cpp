#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
         cin>>a[i];
         ll sum=0;
        for(ll i=0;i<n;i++)
        {
            sum+=a[i];
        }
        if(sum&1)
         cout<<"2"<<endl;
        else
         cout<<"1"<<endl; 

    }
}