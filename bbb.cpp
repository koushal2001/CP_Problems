#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s,a;
    cin>>s>>a;
    for(ll i=0;i<s.length();i++)
    {
        P[s[i]]++;

    }
    for(ll i=0;i<a.length();i++)
    {
        P[a[i]]--;
    }
    for(auto i:P)
    {
        while(i.second>0)
        {
            cout<<i.first;
            i.second--;
        }
    }
}