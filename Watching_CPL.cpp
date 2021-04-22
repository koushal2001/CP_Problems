#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll func(ll k,ll n,ll a[])
{
   ll b[n+1]={};
   b[0]=1;
   for(ll i=0;i<k;i++)
   {
       for(ll j=n;j>=a[i];j--)
       {
           if(b[j-a[i]]==1)
            b[j]=1;
       }
   }
   return b[n];
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n];
        ll total=0;
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
            total+=a[i];
        }
        sort(a,a+n,greater<ll>());
        if(total<2*k||n==1)
          cout<<"-1"<<endl;
        else if(a[0]>=k)
        {
            ll sum=0;
            ll count=0;
            for(ll i=1;i<n;i++)
            {
                sum+=a[i];
                count++;
                if(sum>=k)
                {
                    cout<<count+1<<endl;
                    break;
                }
            }
        }  
        else if(total==2*k)
        {
           if(total%2==1||a[0]>k)
             cout<<"-1"<<endl;
            else if(a[0]==k)
             cout<<n<<endl;
            else
            {
                if(func(n,k,a))
                {
                    cout<<n<<endl;
                }
                else
                {
                    cout<<"-1"<<endl;
                }
                
            }
              
        }
        else
        {
            ll sum=0;
            sum+=a[0];
            bool visited[n]={};
            visited[0]=1;
            for(ll i=n-1;i>=1;i--)
            {
                sum+=a[i];
                visited[i]=1;
                if(sum>=k)
                 break;
            }
            ll gg=0;
            for(ll i=0;i<n;i++)
            {
                if(visited[i]==0)
                {
                    gg+=a[i];
                    visited[i]=1;
                    if(gg>=k)
                     break;
                }
            }
            ll coun=0;
            for(ll i=0;i<n;i++)
            {
                if(visited[i]==1)
                 coun++;
            }
            cout<<coun<<endl;
        }
        
        
          
       
    }
}