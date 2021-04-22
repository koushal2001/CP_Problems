#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        cin.ignore();
        string s;
        string p={};
        getline(cin,s);
        ll count=0;
        for(ll i=s.length();i>=0;i--)
        {
            if(i==0)
            {
                p+s[i];
            }
            else
            {
            if(s[i]==' '||i==0)
            {
                reverse(p.begin(),p.end());
                cout<<p;
                for(ll i=0;i<count;i++)
                cout<<" ";
                count=0;
                p={};
            } 
            else
            {
                p+=s[i];
            }
            if(s[i]==' ')
            {
                count++;
            }
            }
            
            
        }
    }
}
