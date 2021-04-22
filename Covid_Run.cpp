#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,x,y;
        cin>>n>>k>>x>>y;
           vector<ll>P,Q;
           ll count=0;
        for(ll i=0;i<n;i++)
        {
            P.push_back(i);
        }
        for(ll i=0;i<n;i++)
        {
        ll a=(k+x)%n;
        x=a;
        Q.push_back(a);
        }
        bool flag=1;
        for(ll i=0;i<Q.size();i++)
        {
            if(Q[i]==y)
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    
    }
}