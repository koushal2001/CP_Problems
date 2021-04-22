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
        map<ll,ll>P;
        for(ll i=0;i<n;i++)
        {
            P[a[i]]++;
        } 
        ll m=INT_MIN;
        for(auto i:P)
        {
            if(i.second>m)
             m=i.second;
        }
        cout<<m<<endl;
    }
}