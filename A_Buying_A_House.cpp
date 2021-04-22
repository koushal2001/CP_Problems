#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,k;
    cin>>n>>m>>k;
    ll a[n];
    vector<ll>P;
    for(ll i=1;i<=n;i++)
     cin>>a[i];
    for(ll i=1;i<=n;i++)
    {
        if(a[i]>0&&k>=a[i])
        {
            P.push_back((abs(i-m)));
        }
    }
    sort(P.begin(),P.end());
   cout<<P[0]*10<<endl;

}