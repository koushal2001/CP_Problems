#include<bits/stdc++.h>
#define ll long long
using namespace std;
stack<ll>s;
void dfs(vector<ll>P[],bool visited[],ll v)
{
    visited[v]=1;
    cout<<v<<" ";
    for(auto i:P[v])
    {
        if(visited[i]==0)
        {
            dfs(P,visited,i);
        }
    }

}

 bool iscycle(vector<ll>P[],bool visited[],ll v)
 {
     visited[v]=1;
     s.push(v);
     for(auto i:P[v])
     {
         if(visited[i]==0)
         {
             iscycle(P,visited,i);
         }
         else if(visited[i]==1&&i!=s.top()-1)
         {
            return true;
         }
         
     }
     return false;
 }


void bfs(vector<ll>P[],ll n,ll v)
{
   bool visit[n]={};
   queue<ll>q;
   visit[v]=1;
   q.push(v);
   while(!q.empty())
   {
      int a=q.front();
      cout<<a<<" ";
      q.pop();
      for(auto i:P[a])
      {
          if(visit[i]==0)
          {
              visit[i]=1;
              q.push(i);
          }
      }
   }

}

void addedge(ll a,ll b,vector<ll>P[])
{
   P[a].push_back(b);
   P[b].push_back(a);
}

void display(vector<ll>P[],ll v)
{
   for(ll i=0;i<v;i++)
   {
       cout<<i<<":::";
       for(auto j:P[i])
       {
           cout<<j<<" ";
       }
       cout<<endl;
   }
}

int main()
{
    ll t;
    cout<<"Enter test cases::";
    cin>>t;
    while(t--)
    {
        ll v,e;
        cout<<"Enter vertex and edges::";
        cin>>v>>e;
        vector<ll>P[v];
        cout<<"Enter coordinates of edges";
        for(ll i=0;i<e;i++)
        {
            ll a,b;
            cin>>a>>b;
            addedge(a,b,P);
        }
        display(P,v);
        bool visited[v]={};
        int a;
        cout<<"Enter starting index:::";
        cin>>a;
        cout<<"DFS traversal:::";
        dfs(P,visited,a);
        cout<<endl;
        cout<<"BFS traversal:::";
        bfs(P,v,a);
       bool vk[v]={};
        if(iscycle(P,vk,a))
        {
            cout<<"\nThere is cycle\n";
        }
        else
        {
            cout<<"\nThere is  no cycle\n";
        }
        
    }
}