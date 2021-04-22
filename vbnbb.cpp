#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll m=INT_MAX;
    ll p=INT_MIN;
    ll sum=0;
    ll d=109;
    d=7000000158;
    for(ll i=0;i<n;i++)
    {
    
        m=a[i];
        p=a[i];
        for(ll j=i;j<n;j++)
        {
            
               if(a[j]>p)
               {
                   p=a[j];
               }
               if(a[j]<m)
               {
                   m=a[j];
               }
               sum+=(p-m);
               
               sum=sum%d;
               
            
        }
    }
    cout<<sum<<endl;
}