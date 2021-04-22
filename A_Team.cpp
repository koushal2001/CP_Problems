#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n; ll count=0;
    while(n--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll sum=0;
        sum=a+b+c;
       
        if(sum>=2)
        {
            count++;
        }
    }
    cout<<count<<endl;
}