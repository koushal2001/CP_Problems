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
        sort(a,a+n);
        for(ll i=0;i<n;i++)
         cout<<a[i]<<" ";
         cout<<endl; 
    }
}