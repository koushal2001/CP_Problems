#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
        vector<ll>P;
        ll count=n;
        ll i=0,j=n-1;
        while(count>0)
        {
          P.push_back(a[i]);
          i++;
          count--;
          if(count!=1&&count!=0)
          {
          P.push_back(a[j]);
          j--;
          count--;
          }
        }
        for(ll i=0;i<P.size();i++)
        cout<<P[i]<<" ";
        cout<<endl;
    }
}