#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
     cin>>a[i];
     ll count=0;
     for(ll i=0;i<n-1;i++)
     {
         for(ll j=0;j<n-i-1;j++)
         {
              if(a[j]>a[j+1])
              {
                   swap(a[j],a[j+1]);
                   count++;
              }
         }
         if(count==0)
          break;
     }
     for(ll i=0;i<n;i++)
      cout<<a[i]<<" ";
      cout<<endl;
      cout<<count;
}