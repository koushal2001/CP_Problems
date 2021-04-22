#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
        bool flag=0;
       for(ll i=0;i<=4;i++)
       {
          string a=s.substr(0,i);
          string b=s.substr(n-4+i,n);
          string solve=a+b;
          if(solve=="2020")
          {
              cout<<"YES"<<endl;
              flag=1;
              break;
          }
       }
        if(flag==0)
         cout<<"NO"<<endl;
        
    }
}