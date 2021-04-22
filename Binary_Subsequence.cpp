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
        string s;
        cin>>s;
        ll even=0,odd=0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                even++;
            }
            else
            {
               odd=max(even,odd)+1;
            }
        }
        cout<<n-max(even,odd)<<endl;
    }
}