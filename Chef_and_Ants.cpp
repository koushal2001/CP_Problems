#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll m,x;
        ll a=0,b=0;
        for(ll i=0;i<n;i++)
        {
            cin>>m;
            for(ll i=0;i<m;i++)
            {
                cin>>x;
                 if(x>0)
                  a++;
                 else 
                 b++; 
            }
        }
        cout<<a*b<<endl;
    }
}