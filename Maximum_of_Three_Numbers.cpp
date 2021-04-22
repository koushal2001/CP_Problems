#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int a[3];
        for(ll i=0;i<3;i++)
          cin>>a[i];
        sort(a,a+3,greater<ll>());
        cout<<a[0]<<endl;;  
      
    }
}