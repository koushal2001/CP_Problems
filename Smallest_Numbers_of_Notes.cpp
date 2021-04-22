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
        ll s=0;
        s+=n/100;
        n=n%100;
        s+=n/50;
        n=n%50;
        s+=n/10;
        n=n%10;
        s+=n/5;
        n=n%5;
        s+=n/2;
        n=n%2;
        s+=n;
        cout<<s<<"\n";

    }
}