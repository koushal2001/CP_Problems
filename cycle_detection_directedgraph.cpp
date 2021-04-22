#include<bits/stdc++.h>
#define ll long long
using namespace std;
queue<ll>q;

bool cycle(bool visited[],bool stack[],ll v,vector<ll>P[])
{
   if(visited[v]==0)
   {
       visited[v]=1;
       stack[v]=1;
       for(auto i:P[v])
       {
           if(stack[v]==1)
           {
               return true;
           }
       }
   }
   return false;
}

bool isCyclic(ll v,vector<ll>P[])
{
   bool visited[v]={};
   bool stackkk[v]={};
   for(ll i=0;i<v;i++)
   {
       if(cycle(visited,stackkk,i,P))
        return true;
   }
    return false ;
}

int main()
{
    ll v;
    cin>>v;
    ll e;
    cin>>e;
    vector<ll>P[v];
    for(ll i=0;i<e;i++)
    {
        ll a,b;
        cin>>a>>b;
        P[a].push_back(b);
        P[b].push_back(a);
    }
     if(isCyclic(v,P)) 
        cout << "Graph contains cycle"; 
    else
        cout << "Graph doesn't contain cycle"; 
    return 0; 
}