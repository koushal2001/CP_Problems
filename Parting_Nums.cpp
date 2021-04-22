#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        ll s;
        cin>>s;
        ll rem=0;
        ll sum=0;
        ll b;
        while(s>0)
        {
            s=s/10;
            rem=s%10;
            b=rem/k;
            if(rem%k==0&&b==2)
             sum++;

        }
        cout<<sum<<endl;

    }
}