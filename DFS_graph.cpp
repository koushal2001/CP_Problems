#include<bits/stdc++.h>
#define ll long long
using namespace std;

void add(vector<ll>P[],ll u,ll v)
{
    P[u].push_back(v);
    P[v].push_back(u);
}
void dfs(vector<ll>P[],bool visited[],ll v)
{
   
   visited[v]=1;
   cout<<v<<"->";
   for(auto i:P[v])
   {
       if(visited[i]==0)
        dfs(P,visited,i);
   }

}
int main()
{
    ll v=5;
    vector<ll>P[v];
    add(P,0, 1);
    add(P,0, 2);
    add(P,1, 2);
    add(P,2, 0);
    add(P,2, 3);
    add(P,3, 3);
    bool visited[v]={};
    dfs(P,visited,2);

}