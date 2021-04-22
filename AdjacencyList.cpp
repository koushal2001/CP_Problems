#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> add(vector<ll>adj[],ll v,ll u)
{
    adj[v].push_back(u);
    adj[u].push_back(v);
    return adj[u];
}
int main()
{
   ll v=5;
   vector<ll>P[v];
   add(P,0,1);
   add(P,0,2);
   add(P,0,3);
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