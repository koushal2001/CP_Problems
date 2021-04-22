#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        ll sum=0;
        ll count=0;
        if(n%2==0)
        {
       for(ll i=1;i<=n;i++)
       {
           if(i%2==1&&count<k)
           {
               a[i]=i;
               count++;
           }
           else
           {
               a[i]=-i;
           }
           
       }
       if(k>n/2)
       {
       ll total=n/2;
       ll diff=abs(k-total);
       for(ll i=n;i>=1;i--)
       {
           if(a[i]<0&&sum<diff)
           {
               a[i]=-1*a[i];
               sum++;
           }
       }
       }
        }
        else
        {
           for(ll i=1;i<=n;i++)
       {
           if(i%2==0&&count<k)
           {
               a[i]=i;
               count++;
           }
           else
           {
               a[i]=-i;
           }
           
       }
       if(k>n/2)
       {
       ll total=n/2;
       ll diff=abs(k-total);
       for(ll i=n;i>=1;i--)
       {
           if(a[i]<0&&sum<diff)
           {
               a[i]=-1*a[i];
               sum++;
           }
       }
       } 
        }
        
       for(ll i=1;i<=n;i++)
       {
       cout<<a[i]<<" ";
       }
       cout<<endl;
    //    ll m=0;
    //    for(ll i=1;i<=n;i++)
    //    {
    //       m+=a[i];
    //         if(m>0)
    //           cout<<m<<endl;
          
    //    }
    
    }
}