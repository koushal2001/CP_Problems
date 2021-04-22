#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
     cin>>a[i];
    ll tmp[100000]={};
    for(ll i=0;i<n;i++)
    {
        tmp[a[i]]++;
    }
    tmp[-1]=0;
      for(ll i=0;i<100000;i++)
    {
        tmp[i]=tmp[i-1]+tmp[i];
    }
    ll sol[n]={};
    for(ll i=0;i<n;i++)
    {
        ll d=tmp[a[i]];
        sol[d-1]=a[i];
        tmp[a[i]]--;
    }
    for(ll i=0;i<n;i++)
     cout<<sol[i];
    

}