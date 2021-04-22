#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll a[3];
    while (n--)
    {
     for(ll i=0;i<3;i++)
     {
         cin>>a[i];
     }
     sort(a,a+3,greater<ll>());
     cout<<a[1]<<endl;
    
    }
}