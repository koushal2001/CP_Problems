#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
     cin>>a[i];
     ll m=0;
     ll b=0;
    for(ll i=0;i<n;i++)
    {
        m=a[i];
        b=i;
        for(ll j=i;j<n;j++)
        {
           if(a[j]<m)
           {
               m=a[j];
               b=j;
           }
            
        }
        // cout<<m<<" "<<a[b]<<" "<<a[i]<<endl;
        swap(a[b],a[i]);
    } 
    for(ll i=0;i<n;i++)
     cout<<a[i]<<" ";
}
