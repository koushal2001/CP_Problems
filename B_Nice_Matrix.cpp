#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
        ll n,m;
        cin>>n>>m;
        ll a[n][m];
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        ll count=0;
        for(ll i=0;i<m;i++)
        {
            for(ll j=0;j<n;j++)
            {
              ll x,y,z;
              x=abs(a[n-i-1][j]-a[i][j])+abs(a[i][m-j-1]-a[i][j]);
              y=abs(a[i][j]-a[n-i-1][j])+abs(a[i][m-j-1]-a[n-i-1][j]);
              z=abs(a[n-i-1][j]-a[i][m-j-1])+abs(a[i][m-j-1]-a[i][j]);
              if(x<=y&&x<=z)
              {
                count+=x;
                a[n-i-1][j]=a[i][j];
                a[i][m-j-1]=a[i][j];
              }
              else if(y<=z&&y<=x)
              {
                  count+=y;
                a[i][j]= a[n-i-1][j];
                a[i][m-j-1]= a[n-i-1][j];
              }
              else if(z<=x&&z<=y)
              {
                  count+=z;
               
                a[n-i-1][j]= a[i][m-j-1];
                 a[i][j]= a[i][m-j-1];
              }
              
               
                
            }
        }
       // cout<<count<<endl;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                cout<<a[i][j]<<" ";
            }cout<<endl;
        }
        
        
    }
}