#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll sum=0;
        ll a[n];
        vector<ll>P;
        for(ll i=0;i<n;i++)
         cin>>a[i];
        for(ll i=0;i<n;i++)
        {
           if(a[i]>k)
           {
               sum+=a[i]-k;
               a[i]=k;
           }
           else if(a[i]<k && sum>0)
           {
               sum+=a[i];
               sum-=k;
               if(sum<0)
               {
                 sum+=k;
                 a[i]=sum;
               }
               else
               {
                   a[i]=k;
               }
               
           }
         
        }  
        for(ll i=0;i<n;i++)
         cout<<a[i];
        bool flag=1;
        ll m=0;
        ll b=sum/k; 
        for(ll i=0;i<n;i++)
        {
            if(a[i]<k)
            {
                flag=0;
                m=i+1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<m<<endl;
        }
        else
        {
            cout<<n+b+1<<endl;
        }
    }
}