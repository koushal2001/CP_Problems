#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a==1&&b==1)
         cout<<"1"<<endl;
         else
         {
             ll even=0,even1=0,odd=0,odd1=0;
             if(a%2==1)
             {
                odd++;
             }
             if(b%2==1)
             {
                 odd1++;
             }
             even+=a/2;
             even1+=b/2;
             odd+=a/2;
             odd1+=b/2;
             cout<<(even*even1)+(odd*odd1)<<endl;
         }
         
    }
}