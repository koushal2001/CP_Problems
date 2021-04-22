#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    map<ll,ll>P;
    for(ll i=0;i<n;i++)
    {
        P[a[i]]++;
    }
    for(auto i:P)
    {
        cout<<i.first;
    }
}