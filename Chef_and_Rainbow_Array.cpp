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
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n/2;i++)
        {
           P.push_back(a[i]);
        }
        if(n%2==0)
        {
        for(ll i=n-1;i>=n/2;i--)
           {
             Q.push_back(a[i]);
           }
        }
        else
        {
        for(ll i=n-1;i>=(n/2)+1;i--)
        {
             Q.push_back(a[i]);

        }
        }
        // for(int i=0;i<P.size();i++)
        // cout<<P[i];
        // cout<<" ";
        // for(int i=0;i<Q.size();i++)
        // cout<<Q[i];
        // cout<<endl;
         ll count=0;
        vector<ll>M;
        for(ll i=1;i<=7;i++)
        {  count=0;
            if(n%2==0)
            {
            for(ll j=0;j<n/2;j++)
            {
                if(i==a[j])
                {
                   count++;
                }
            }
            }
            else
            {
                 for(ll j=0;j<=n/2;j++)
                {
                if(i==a[j])
                {
                    count++;
                }
                }
            }
            M.push_back(count);
           
         }
         ll flag=1;
         for(int i=0;i<M.size();i++)
         {
             if(M[i]==0)
             {
                 flag=0;
                 break;
             }
         }
        if(flag==1 && P==Q )
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
        
    }  
}