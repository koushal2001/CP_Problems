#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
        {
            cin>>a[i];
        }
        ll sum=0,b=-100000000;       
         for(ll i=0;i<n;i++)
        {
            sum+=a[i];
            if(b<sum)
            b=sum;
            if(sum<0)
             sum=0;
             
        }
        cout<<b<<endl;
    }
}