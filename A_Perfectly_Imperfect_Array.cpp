#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isprefect(ll n)
{
   ll a=sqrt(n);
   ll sum=a*a;
   if(sum==n)
   {
       return true;
   }
   else
    return false;

}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
         cin>>a[i];
        bool flag=0;
        for(ll i=0;i<n;i++)
        {
            if(!isprefect(a[i]))
            {
                flag=1;
                break;
            }
        } 
        if(flag==1)
         cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl; 
    }
}