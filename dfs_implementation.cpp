#include<bits/stdc++.h>
#define ll long long
using namespace std;
void dfs(vector<ll>P[],bool visited[],ll initial)
{
    visited[initial]=1;
    cout<<initial<<" ";
        for(auto j:P[initial])
        {
              if(visited[j]==0)
              {
                  dfs(P,visited,j);
              }
        }
}
  
int main()
{
    ll v;
    cin>>v;
    ll e;
    cin>>e;
    vector<ll>P[v+1];
    for(ll i=1;i<=e;i++)
    {
        ll a,b;
        cin>>a>>b;
        P[a].push_back(b);
        P[b].push_back(a);
    }
    bool visited[v+1]={};
    dfs(P,visited,2);
}