#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll a[n],b[m];
        for(ll i=0;i<n;i++)
        {
        cin>>a[i];
        }
        for(ll i=0;i<m;i++)
        {
        cin>>b[i];
        }
        ll sum=0,total=0;
        ll count=0;
        ll c=max(n,m);
        while(c--)
        {
        sum=0,total=0;
        for(ll i=0;i<n;i++)
        sum+=a[i];
        for(ll i=0;i<m;i++)
        total+=b[i];
        if(sum>total)
        {
            cout<<count<<endl;
            break;
        }
        else
        {
            ll w=min_element(a,a+n)-a;
            ll r=max_element(b,b+m)-b;
            swap(a[w],b[r]);
            count++;
        }
       
        }
         if(sum<=total)
        {
            cout<<"-1"<<endl;
        }
        
    }
}