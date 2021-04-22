#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
        ll n,x,p,k;
        cin>>n>>x>>p>>k;
        ll a[n];
        vector<ll>P,Q;
        for(ll i=0;i<n;i++)
        {
           cin>>a[i];
        }
        if(n<p||n<k)
        {
            cout<<"-1"<<endl;
        }
        else
        {
        ll b=0;
        sort(a,a+n);
        bool flag=0;
        for(ll i=0;i<n;i++)
        {
           if(a[i]==x)
           {
             b=i+1;
             P.push_back(b);
             flag=1;
           }
        }
        ll count=0;
        if(flag==0)
        {
          a[k-1]=x;
          count++;
          sort(a,a+n);
        for(ll i=0;i<n;i++)
        {
          if(a[i]==x)
          {
            b=i+1;
            P.push_back(b);
          }
        }
        }
        if(a[p-1]==x)
        {  
            cout<<0+count<<endl;
        }
        else if(k<=p&&a[p-1]<=x)
        {
            cout<<abs(P[0]-p)+count<<endl;
        }
        else if(k>=p&&a[p-1]>=x)
        {
          cout<<abs(p-P[P.size()-1])+count<<endl;
        }
        else
        {
          cout<<"-1"<<endl;
           
        }
        }
        
    }
}