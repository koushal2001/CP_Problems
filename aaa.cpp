#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
     cin>>a[i]; 
     map<ll,ll>M;
    for(ll i=0;i<n;i++)
    {
        a[i]=a[i]*a[i];
        M[a[i]]++;
    } 
   for(auto i:M)
   {
       while(i.second>0)
       {
           cout<<i.first<<" ";
           i.second--;
       }
   }
  
}