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
        if(n==1)
        {
            cout<<"Not prime"<<endl;
        }
        else
        {
            bool flag=0;
            for(ll i=2;i*i<=n;i++)
            {
                if(n%i==0)
                {
                    cout<<"Not Prime"<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag==0)
             cout<<"Prime"<<endl;

        }
        
    }
}