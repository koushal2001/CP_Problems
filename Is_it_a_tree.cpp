#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll>P[10000000];
bool visited[10000000]={};
void dfs(ll v)
{
   visited[v]=1;
   for(auto i:P[v])
   {
       if(visited[i]==0)
       {
        dfs(i);
       }
   }

}
int main()
{
   ll n,e;
   cin>>n>>e;
   for(ll i=1;i<=e;i++)
   {
       ll a,b;
       cin>>a>>b;
    P[a].push_back(b);
    P[b].push_back(a);
   }
   
   ll count=0;
   for(ll i=1;i<=n;i++)
   {
       if(visited[i]==0)
       {
        dfs(i);
        count++;
       }
   }
   if(count==1&&e==n-1)
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }
   
}

 