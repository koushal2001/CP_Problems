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
        string p="";
        vector<char>P;
        for(ll i=0;i<s.length();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
              P.push_back(s[i]);
            }
            else
            {
                p+=s[i];
            }
        }
        sort(P.begin(),P.end());
        string l="";
        for(ll i=0;i<P.size();i++)
        {
            l+=P[i];
        }
        l=l+p;
        cout<<l<<endl;
    }
}