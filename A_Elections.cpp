#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
     cin>>a[i];
     sum+=a[i];
    }
    sort(a,a+n,greater<ll>());
    ll greater=a[0];
    ll key;
    for(ll i=greater;;i++)
    {
        ll total=0;  key=0;
        for(ll j=0;j<n;j++)
        {
            total+=i-a[j];
        }
      
        if(total>sum)
        {
            key=i;
            break;
        }
    }
    cout<<key<<endl;

}