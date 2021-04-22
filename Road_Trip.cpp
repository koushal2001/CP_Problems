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
        {
           cin>>a[i];
        }
        ll b,c;
        cin>>b>>c;
        ll sum=1;
        for(ll i=b;i<c;i++)
        {
          sum=sum*a[i];
          sum=sum%1000000007;
        }
        cout<<sum<<endl;
    }
}