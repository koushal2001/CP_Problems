#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll parent[100000];
ll find(ll u)
{
   if(u==parent[u])
   {
    return u;
   }
   else
   {
     return find(parent[u]); 
   }
 
}

void unio(ll u,ll v)
{
    parent[u]=parent[v];
}

ll kru(vector<pair<ll,pair<ll,ll>>>P,ll v,ll e)
{
    for(ll i=0;i<v;i++)
    {
        parent[i]=i;
    }
    ll count=0;
    ll total=0;
    for(ll i=0;i<e&&count<=v-1;i++)
    {
        ll a=find(P[i].second.first);
        ll b=find(P[i].second.second);

        if(a!=b)
        {
          total+=P[i].first;
          count++;
          unio(a,b);
        }
    }
    return total;
}

int main()
{
    ll v,e;
    cin>>v>>e;
    vector<pair<ll,pair<ll,ll>>>P;
    for(ll i=0;i<e;i++)
    {
        ll a,b,w;
        cin>>a>>b>>w;
        P.push_back(make_pair(w,make_pair(a,b)));
    }
    sort(P.begin(),P.end());
    ll mincost=kru(P,v,e);
    cout<<mincost<<endl;
}