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
   // for(ll i=1;i<=n;i++)
   // {
   //    cout<<i<<":::";
   //    for(auto j:P[i])
   //    {
   //       cout<<j<<" ";
   //    }
   //    cout<<endl;
   // }
   ll count=0;
   for(ll i=1;i<=n;i++)
   {
       if(visited[i]==0)
       {
         // for(ll i=1;i<=n;i++)
         // {
         //    cout<<visited[i];
         // }
         // cout<<endl;
        dfs(i);
        count++;
       }
   }
   cout<<count<<endl;
}

 