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
    ll j=0;
    ll key=0;
    for(ll i=1;i<n;i++)
    {
        j=i-1;
        key=a[i];
        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    for(ll i=0;i<n;i++)
     cout<<a[i]<<" ";
}