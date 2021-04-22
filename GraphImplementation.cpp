#include<bits/stdc++.h>
#define ll long long
using namespace std;
void add(vector<vector<ll>P,ll u,ll v)
{
    P[u].push_back(v);
    P[v].push_back(u);
}
void display(vector<vector<ll>P,ll u)
{
   for(ll i=0;i<u;i++)
   {
       cout<<i<<":::";
       for(auto j:P)
       {
           cout<<j<<" ";      
       }
       cout<<endl;
   }
}
int main()
{
    ll v=5;
    vector<vector<ll>>adj;
    add(adj,1,0);
     add(adj,1,1);
      add(adj,1,2);
       add(adj,1,3);
       display(adj,v);
    
}