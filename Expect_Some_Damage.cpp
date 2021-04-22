

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll D[n+1][m+1];
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=m;j++)
        {
            cin>>D[i][j];
        }
    }
    ll q;
    cin>>q;
    double sum=0;
    for(ll i=0;i<q;i++)
    {
        ll damage=0;
        double a,b,c,d;
        double e;
        cin>>a>>b>>c>>d>>e;
     
        for(ll i=a;i<=c;i++)
         {
             for(ll j=b;j<=d;j++)
             {
                 damage+=D[i][j];
             }
         } 
      sum=sum+(damage*e);
       //cout<<damage<<" ";
    }
        cout<<fixed<<std::setprecision(20) <<sum<<endl;
}