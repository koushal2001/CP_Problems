#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,d;
        cin>>n>>k>>d;
        ll a[n];
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i]; sum+=a[i];
        }
        ll m=sum/k;
        if(m>d)
         cout<<d<<endl;
        else
        {
            cout<<m<<endl;
        }
         
    }
}