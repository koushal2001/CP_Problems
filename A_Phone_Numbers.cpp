#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    if(n<=10)
    {
        cout<<"0"<<endl;
    }
    else
    {
        int count=n/11;
        ll total=0;
        for(ll i=0;i<s.length();i++)
        {
            if(s[i]=='8')
            {
              total++;
            }
        }
        if(count<total)
        {
            cout<<count<<endl;
        }
        else
        {
            cout<<total<<endl;
        }
    }
}