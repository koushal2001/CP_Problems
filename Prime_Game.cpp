#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
#define PI  3.14159265358979323846
#define MOD 1000000007
ll ssum(ll n) {return (n * (n + 1)) / 2;}
ll gcd(ll a, ll b) {if (b == 0)return a; return gcd(b, a % b);}
ll lcm(ll a,ll b){return (a*b)/(__gcd(a,b));}

bool Prime(ll a) 
{ 
   
    if (a == 1 || (a>2&&a%2==0)) 
        return false; 
  
    for (ll i = 2; i*i <=a; i++) 
        if (a % i == 0) 
            return false; 
  
    return true; 
} 

ll b[1000001]={0};
void solve()
{
  
       ll x,y;
       cin>>x>>y;
       if(b[x]<=y)
       {
           cout<<"Chef"<<endl;
       }
       else
        cout<<"Divyam"<<endl;
   
}
 
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    for(ll i=2;i<1000001;i++)
{
    if(Prime(i))
     b[i]=1+b[i-1];
    else
     b[i]=b[i-1]; 
}
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}


