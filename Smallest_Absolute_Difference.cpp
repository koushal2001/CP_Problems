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
        ll b[n];
        for(ll i=0;i<n;i++)
         cin>>a[i];
        for(ll i=0;i<n;i++)
         cin>>b[i]; 
        ll min1=INT_MAX;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
               ll diff=abs(a[i]-b[j]);
             //  cout<<diff<<endl;
               if(diff<min1)
                min1=diff;
            }
            
        } 

        cout<<min1<<endl;
    }
    
}