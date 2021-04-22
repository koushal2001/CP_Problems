#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll v,e;
    cin>>v>>e;
    ll graph[v][v]={};
    for(ll i=0;i<e;i++)
    {
        ll a,b,w;
        cin>>a>>b>>w;
        graph[a][b]=w;
    }
     for(ll i=0;i<v;i++)
    {
         for(ll j=0;j<v;j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }

}
