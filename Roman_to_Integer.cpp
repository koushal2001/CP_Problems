#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string m;
        cin>>m;
        vector<char>P;
        vector<ll>Q;
        for(ll i=0;i<m.length();i++)
        {
            P.push_back(m[i]);
            if(P[i]=='I')
              Q.push_back(1);
            if(P[i]=='V')
              Q.push_back(5);  
            if(P[i]=='X')
              Q.push_back(10);
            if(P[i]=='L')
              Q.push_back(50);
            if(P[i]=='C')
              Q.push_back(100);
            if(P[i]=='D')
              Q.push_back(500);
            if(P[i]=='M')
              Q.push_back(1000);
        }
        vector<ll>M;
        ll sum=0;
        for(ll i=0;i<Q.size();i++)
        {
               sum+=Q[i];
            
        }
        for(ll i=0;i<Q.size()-1;i++)
        {
          if(Q[i]<Q[i+1])
          {
              M.push_back(Q[i]);
          }
            
        }
    if(M.size()>0)
    {    
    for(ll i=0;i<M.size();i++)
     sum=sum-(M[i]*2);
     cout<<sum;
    }
    else
    {
      cout<<sum<<endl;
    }
    

        
    }
}