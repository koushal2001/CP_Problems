#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll count=a*a;
        if(b>count)
        {
            cout<<"No"<<endl;
        }
        else
        {
            if(b%a==0)
            {
                cout<<"Yes"<<endl;
            }
            else
             cout<<"No"<<endl;
        }
    }
}