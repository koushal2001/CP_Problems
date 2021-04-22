#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,d;
        cin>>n>>d;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll risk=0,norisk=0;
        for(ll i=0;i<n;i++)
        {
            if(a[i]<=9||a[i]>=80)
            {
                risk++;
            }
            else
            {
                norisk++;
            }
            
        }
        ll days=0;
        if(risk%d==0)
        {
             days+=(risk/d);
        }
        else
        {
               days+=(risk/d)+1;
        }
        if(norisk%d==0)
        {
             days+=(norisk/d);
        }
        else
        {
               days+=(norisk/d)+1;
        }
        
       
        cout<<days<<endl;
    }
}