#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        if(n%2==0)
        {
            cout<<max(a,b)/min(a,b)<<endl;
        }
        else
        {
             cout<<max(2*a,b)/min(2*a,b)<<endl;
        }

    }
}