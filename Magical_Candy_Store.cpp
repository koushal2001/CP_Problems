#include <bits/stdc++.h> 
using namespace std; 
#define ll long long
#define mod 1000000007
int main()
{ 
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;ll m=0;
        ll pos;
        ll a[n];
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
        
        if(a[i]==1)
        {
            if(i==1)
            {
               m=1;
            }
           else if(i!=n)
           {
           m=2;
           pos=i;
           }
           else
           {
               m=0;
           }
           
        }
        
        
        }
        ll q;
        cin>>q;
        for(ll j=0;j<q;j++)
        {
            ll r;
            cin>>r;
            ll total=0;
            ll count=0;
            ll chef=0;
            ll chefa=1;
            if(n==1)
            {
                for(ll i=1;i<=r;i++)
                {
                ll z=a[((i-1)%n)+1];
                ll p=((i-1)%n)+1;
                if(chef==0)
                {
                    if(z%2!=0)
                    {
                        total=(total+a[n])%mod;
                        swap(chef,chefa);
                    }
                    else if(z%2==0&&r>i)
                    {
                        z--;
                         total=(total+z)%mod;
                         swap(chef,chefa);
                    }
                    else
                    {
                         total=(total+z)%mod;
                    }
                    
                   swap(chef,chefa); 
                }
                }
                cout<<total%mod<<endl;
            }
             else if(m==2)
            {  
                ll count=0;
                for(ll i=1;i<=r;i++)
               {
                   count++;
                    ll z=a[((i-1)%n)+1];
                    ll p=((i-1)%n)+1;
                   if(pos-1==p&&r>count)
                   {
                       if(z%2==0)
                       {
                           z--;
                           total+=z;
                       }
                       else
                       {
                           total+=z;
                       }
                       
                   }
                   else if(p==n&&r>count)
                   {
                       z--;
                       total+=z;
                   }
                   else if(z!=1)
                   {
                       total+=z;
                   }
                   
                   
               }
               cout<<total<<endl;
            }
            else if(m==1)
            {
                ll l=0;
                for(ll i=1;i<=r;i++)
                {
                ll z=a[((i-1)%n)+1];
                ll p=((i-1)%n)+1;
                if(p==1)
                {
                    l++;
                }
                
                }
                if(r%n==1&&r>1)
                {
                    l--;
                }
                cout<<(l*1)%mod<<endl;
            }
            else
            { 
                count=0;
            for(ll i=1;i<=r;i++)
            {count++;
                ll z=a[((i-1)%n)+1];
                ll p=((i-1)%n)+1;
                
                   if(chef==0)
                   {
                       if(z%2!=0&&z!=1&&r>count&&p<n)
                       {
                           z--;
                           total=(total+z)%mod;
                       }
                      else if(p==n&&z%2==0&&r>count)
                       {
                           z--;
                           total=(total+z)%mod;
                       }
                       else
                       {
                           total=(total+z)%mod;
                       }
                       if(z%2!=0)
                       {
                           swap(chef,chefa);
                       }
                       
                   }
                   if(p==n)
                   {
                       swap(chef,chefa);
                   }
            }
            cout<<(total%mod)<<endl;
            }
            
    
        }
  
    }
}