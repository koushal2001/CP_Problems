#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
#define PI  3.14159265358979323846
#define MOD 1000000007
ll ssum(ll n) {return (n * (n + 1)) / 2;}
ll gcd(ll a, ll b) {if (b == 0)return a; return gcd(b, a % b);}
ll lcm(ll a,ll b){return (a*b)/(__gcd(a,b));}

bool isvalid(ll l,ll b,ll h,ll n,ll mid)
{
    
   return (mid/l)*(mid/b)*(mid/h)>=n;
}

void solve()
{
   ll l,b,h,n;
   cin>>l>>b>>h>>n;
   ll low=0,high=1000000;
   while(high-low>1)
   {
       ll mid=(low+high);
       mid=mid/2;
       //cout<<mid<<" ";
       if(isvalid(l,b,h,n,mid))
        high=mid;
       else
        low=mid; 

   }
   cout<<high<<endl;
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