#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(ll i=1;i<=n;i++)
    {
       cin>>a[i];
    }
    ll key=a[k];
    ll count=0;
    for(ll i=1;i<=n;i++)
    {
        if(a[i]>=key&&a[i]>0)
        {
            count++;
        }
    }
    cout<<count<<endl;
}