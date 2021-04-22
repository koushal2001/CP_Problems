#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
vector<ll>P[100000];
bool visited[100000];
ll dist[100000];

void dfs(ll v,ll d)
{
    visited[v]=1;
    dist[v]=d;
    for(auto i:P[v])
    {
        if(visited[i]==0)
        { 
            dfs(i,dist[v]+1);
        }
         
    }
}

int main()
{
    ll n;
    cin>>n;
    for(ll i=0;i<n-1;i++)
    {
        ll a,b;
        cin>>a>>b;
        P[a].push_back(b);
        P[b].push_back(a);
    }
    dfs(1,0);
    ll q;
    cin>>q;
   ll min=10000000,tmp;
    while(q--)
    {
        ll c;
        cin>>c;
        if(min>dist[c]||((min==dist[c])&&c<tmp))
        {
            min=dist[c];
            tmp=c;
        }

    }
    cout<<tmp;
}