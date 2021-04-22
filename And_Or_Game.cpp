#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,m;
        cin>>n>>m;
        ll a[n],b[m];
        for(ll i=0;i<n;i++)
         cin>>a[i];
        for(ll i=0;i<m;i++)
        cin>>b[i];
        set<ll>P;
        stack<ll>Q;
        ll v=0;
        Q.push(0);
        while(!Q.empty())
        {
            v=Q.top();
            Q.pop();
            for(ll i=0;i<n;i++)
            {
                ll m=a[i];
                if(P.find(v|m)==P.end())
                {
                    P.insert(v|m);
                    Q.push(v|m);

                }
            }
             for(ll i=0;i<m;i++)
            {
                ll q=b[i];
                if(P.find(v&q)==P.end())
                {
                    P.insert(v&q);
                    Q.push(v&q);

                }
            }
        }
        cout<<P.size()<<endl;
        
    }
}