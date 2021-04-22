#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        vector<ll>P,Q;
        string s="";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n/2;i++)
        {
            P.push_back(a[i]);
        }
        for(ll i=n-1;i>=(n/2)+1;i--)
        {
                Q.push_back(a[i]);
        }
        //  for(int i=0;i<P.size();i++)
        // {
        //     cout<<P[i];
        // }
        // cout<<endl;
        // for(ll i=0;i<Q.size();i++)
        // {
        //         cout<<Q[i];
        // }
        if(P==Q)
           {
             cout<<"Yes"<<endl;
            }
           else
            {
             cout<<"No"<<endl;
           }

    }
}    