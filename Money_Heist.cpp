#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool myComparison(pair<int,int>a,pair<int,int>b)
{
    if(a.first==b.first)
    {
        if(a.second>b.second)
         return false;
        else
         return true; 
    }
    else if(a.first<b.first)
     return false;
    else
     return true; 
       
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,c,b;
        cin>>n>>c>>b;
        ll a[n];
        priority_queue<pair<ll,ll>>P;
        for(ll i=0;i<n;i++)
        {
             cin>>a[i];
             P.push(make_pair(a[i],i));
        }
        ll coins=0;
        ll count=0;
        vector<pair<ll,ll>>S;
        vector<ll>M[n+1];
        vector<ll>Q;
        while(!P.empty())
        {
            pair<ll,ll>m=P.top();
            if(m.first==0)
             break; 
            ll p=ceil(m.first/3.0); 
            coins+=p;
            Q.push_back(coins);
            P.pop();
             M[m.second+1].push_back(m.second+1);
            if(M[m.second+1].size()<b)
            {
                 P.push(make_pair(m.first-p,m.second));
            }
            
            S.push_back(make_pair(m.first,m.second+1));
           if(count<c)
            count++;
        }
         sort(S.begin(),S.end(),myComparison);
         cout<<Q[count-1]<<" "<<count<<endl;
        for(ll i=0;i<count;i++)
         cout<<S[i].second<<" ";
         cout<<endl;
        
    }
}
