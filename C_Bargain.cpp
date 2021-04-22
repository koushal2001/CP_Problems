#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll n;
    cin>>n;
    string s="";
    s+=to_string(n);
    ll sum=0;
    string p="";
    vector<string>P;
    for(ll i=0;i<s.length();i++)
    {
        sum+=(s[i]-48);
    }
    for(ll i=0;i<s.length()-1;i++)
    {
        p+=to_string(s[i]-48);
        for(ll j=i+1;j<s.length();j++)
        {
            p+=to_string(s[j]-48);
            P.push_back(p);
            break;
        //    sum+=(s[i]-48)+(s[j]-48);
        }
    }
    //cout<<sum;
}