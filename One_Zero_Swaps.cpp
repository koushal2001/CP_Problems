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
        string s,p;
        cin>>s>>p;
        if(s==p)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
        ll a=0,b=0;
        bool flag=0;
        bool f=0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='1'&&flag==0)
            {
               a=i;
               flag=1;
            }
            else if(s[i]=='0'&&flag==1)
            {
                  b=i;
                  swap(s[a],s[b]); 
            
            }
            
            if(s==p)
            {
                cout<<"Yes"<<endl;
                f=1;
                break;
            }
           
        }
            if(f==0)
            {
                cout<<"No"<<endl;
            }
            
        }
    }
}