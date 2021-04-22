#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
     cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
        cin>>a[i];
        }
        ll i=0;
        ll flag=0;
        ll s=0;
        for(ll m=k;i<n-1&&m>0;m--)
        {
           flag=0;
            ll p=log(a[i])/log(2);
            ll d=pow(2,p);
             a[i]=a[i]^d;
             for(ll k=i+1;k<n;k++)
             {
                 if((a[k]^d)<a[k])
                 {
                     a[k]=a[k]^d;
                     flag=1;
                     break;

                 }
             }
            if(flag==0)
            {
                a[n-1]^=d;
            }
            while(a[i]<=0)
            i++;
            s=m+1;
        }
        if(s>0)
        {
            if(n<3&&s%2>0)
            {
                a[n-2]^=1;
                a[n-1]^=1;
            }
        }
        for(ll i=0;i<n;i++)
         cout<<a[i]<<" ";
    }
}