#include<bits/stdc++.h>
#define ll long long
using namespace std;
queue<ll>q;
void dfs(vector<ll>P[],bool visited[],ll v)
{
    
    visited[v]=1;
    q.push(v);
    while(!q.empty())
    {
        ll a=q.front();
        cout<<a<<" ";
        q.pop();
        for(auto i:P[a])
        {
            if(visited[i]==0)
            {
                visited[i]=1;
                q.push(i);
            }
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
    // for(ll i=0;i<=v;i++)
    // {
    //     cout<<i<<":::";
    //     for(auto j:P[i])
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    bool visited[v+1]={};
    dfs(P,visited,0);
}