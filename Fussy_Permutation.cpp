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
        ll a[n+1];
        for(ll i=1;i<=n;i++)
        {
           cin>>a[i];
        }
        bool f=0;
        for(ll i=1;i<=n;i++)
        {
            if(a[i]>i+3||a[i]<i-3)
            {
                f=1;
                break;
            }
        }
        if(f==1)
         cout<<"Yes"<<endl;
         else
          cout<<"No"<<endl;
    }
}