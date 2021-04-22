#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        ll mod=1000000007;
        ll sum=(pow(a,n)+pow(b,n))%mod;
        ll diff=(abs(a-b))%mod;
        cout<<__gcd(sum,diff)<<endl ;
    }
}