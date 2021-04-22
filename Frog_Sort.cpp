#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
#define PI  3.14159265358979323846
#define MOD 1000000007
ll ssum(ll n) {return (n * (n + 1)) / 2;}
ll gcd(ll a, ll b) {if (b == 0)return a; return gcd(b, a % b);}
ll lcm(ll a,ll b){return (a*b)/(__gcd(a,b));}


void solve()
{
   ll n;
   cin>>n;
   ll w[n],l[n];
   vector<ll>P,Q;
   for(ll i=0;i<n;i++)
   {
       cin>>w[i];  
   }
   for(ll i=0;i<n;i++)
   {
       cin>>l[i];
   }
   for(ll i=1;i<=6;i++)
   {
       for(ll j=0;j<n;j++)
       {
           if(i==w[j])
           {
               P.push_back(j);
               Q.push_back(l[j]);
           }
       }
   }
//    for(ll i=0;i<n;i++)
//         cout<<P[i]<<" ";
//         cout<<endl;
   ll count=0;
   for(ll i=0;i<n-1;i++)
   {
       if(P[i]>=P[i+1])
       {
           while(P[i+1]<=P[i])
           {
               P[i+1]+=Q[i+1];
               count++;
           }
       }
    //    for(ll i=0;i<n;i++)
    //     cout<<P[i]<<" ";
    //     cout<<endl;
   }
  // cout<<endl<<endl;
   cout<<count<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}