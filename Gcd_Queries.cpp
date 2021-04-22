#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        ll a[n];
        ll pre[n],post[n];
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
        }
            pre[0]=0;
            post[n+1]=0;

        for(ll i=1;i<=n;i++)
        {
            pre[i]=__gcd(pre[i-1],a[i]);
        }    
        for(ll i=n;i>=0;i--)
        {
            post[i]=__gcd(post[i+1],a[i]);
        }
        for(ll p=0;p<q;p++)
        {
            ll l,r;
            cin>>l>>r;
            cout<<__gcd(pre[l-1],post[r+1])<<endl;
        }
      
    }
}