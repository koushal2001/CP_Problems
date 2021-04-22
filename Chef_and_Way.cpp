#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(ll i=0;i<n;i++)
    cin>>a[i];
    vector<ll>p;
    ll min=0;
    for(ll i=0;i<n;i++)
    {
        min=INT_MAX;
    for(ll j=i+1;j<n;j++)
    {
        if(abs(a[j]-a[i]<=k))
        {
           if(a[j]<min)
           {    
               min=a[j];
               i=j;
           }
        }
    }
    p.push_back(min);
    }
    ll sum=1;
    for(ll i=0;i<p.size();i++)
    sum=(sum*p[i])%1000000007;
    cout<<sum<<endl;

    
}