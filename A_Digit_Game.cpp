#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        vector<ll>P;
        ll digit;
        string p;
        cin>>digit;
        cin>>p;
        for(ll i=0;i<p.length();i++)
        {
            P.push_back(p[i]);
        }
        if(P[0]%2==0)
        {
          cout<<"2"<<endl;
        }
        else
        {
            cout<<"1"<<endl;
        }
        
        
    }
}