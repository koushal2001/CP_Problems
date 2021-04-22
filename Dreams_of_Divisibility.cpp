#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,c;
        cin>>n>>c;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        bool f=0;
        for(ll i=0;i<n;i++)
        {
           // f=0;
            ll b=a[i];
            while(1)
            {
                if(b%c==0)
                {
                    break;
                }
                if(b>100000000000000)
                {
                    cout<<"NO\n";
                    f=1;
                    break;
                }
                b=b+b;
            }
            if(f==1)
             break;
            
        }
        if(f==0)
            cout<<"YES"<<endl;
        
       
    }
}
