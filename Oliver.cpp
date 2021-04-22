#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
 cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
     
        if(n==1)
         cout<<"1"<<endl;
        else
        { 
            ll sum=1;
            ll count=1;
            ll k=0;
        for(ll i=2;count<n;i++)
        {
            
            sum+=i*i;
            count+=i;
             k=i;
        }
               if(count>n)
               {
                   ll a=abs(n-count);
                   sum=sum-(a*k);
               }
          
        cout<<sum<<endl;
        }
    }
}