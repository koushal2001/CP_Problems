#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        ll a[n];
        set<ll>P;
        for(ll i=0;i<n;i++)
        {
         cin>>a[i];
         P.insert(a[i]);
        }
        sort(a,a+n);
        for(ll i=0;i<n;i++)
        {
           ll m=x^a[i];
           if(P.find(m)!=P.end())
           {
               cout<<a[i]<<" "<<m<<endl;
               break;
           }
        }
    }
}