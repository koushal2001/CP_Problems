#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    ll n,k;
    cin>>n>>k;
    ll a[n];
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
     cin>>a[i];
     sum+=a[i];
    }
    if(sum%k==0)
    {
        cout<<"0"<<endl;
    }
    else
    {
            cout<<"1"<<endl;
        
    }
    }

}