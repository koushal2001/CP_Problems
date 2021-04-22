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
         ll count=0;
         ll v=0;
         for(ll i=0;i<n;i++)
         {
             if(a[i]&1)
             {
                 count++;
             }
             else
              v++;

         }
         ll b=min(count,v);
         cout<<b<<endl;
    }
}