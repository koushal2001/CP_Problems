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
        ll a[n];
        if(s.empty())
        {
           cout<<"0"<<endl;
           
        }
        else
        {
        for(ll i=0;i<s.length();i++)
        {
             if(s[i]=='+')
              a[i]=1;
             else
              a[i]=-1; 
        }
        
     int sum=INT_MIN;
    int m=0;
    for(int i=0;i<n;i++)
    {
        m+=a[i];
        if(m<a[i])
        {
            m=a[i];
        }
        sum=max(sum,m);
        //cout<<sum<<endl;
    }
    if(sum<0)
     cout<<"0"<<endl;
     else
   cout<<sum<<endl;
        }
    }
}