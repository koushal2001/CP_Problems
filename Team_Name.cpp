#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
#define PI  3.14159265358979323846
#define MOD 1000000007
ll ssum(ll n) {return (n * (n + 1)) / 2;}
ll gcd(ll a, ll b) {if (b == 0)return a; return gcd(b, a % b);}
ll lcm(ll a,ll b){return (a*b)/(__gcd(a,b));}


ll func(vector<char>dhar,vector<char>abhishek)
{
     set<char>sp;
     for(ll i=0;i<dhar.size();i++)
      sp.insert(dhar[i]);
   ll a=0;
   for(auto i:abhishek)
   {
       if(sp.find(i)!=sp.end())
        a++;
   }
   return a;
}
void solve()
{
    ll n;
    cin>>n;
    string s;
    map<string,vector<char>>P;
    for(ll i=0;i<n;i++)
    {
        cin>>s;  
        string p="";
        for(ll j=1;j<s.length();j++)
        {
           p+=s[j];
        }
        P[p].push_back(s[0]);
    }
 ll count=0;
 



   for(auto i:P)
   {
       for(auto j:P)
       {
           if(i.first!=j.first)
           {
               ll abhi=func(i.second,j.second);
               count+=(i.second.size()-abhi)*(j.second.size()-abhi);
           }
         
       }
       
   }

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