#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n],b[n];
    for(ll i=0;i<n;i++)
     cin>>a[i];
    for(ll i=0;i<n;i++)
     cin>>b[i]; 
    for(ll i=0;i<n;i++)
    {
        a[i]=a[i]-b[i];
        b[i]=0;
    }
    ll count=0;
    for(ll i=0;i<n;i++)
    {
        if(a[i]>0)
        {
           count=count+(n-(i+1));
        }
    }
    cout<<count<<endl;
}