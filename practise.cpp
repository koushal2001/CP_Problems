#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
     ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,l,b;
        cin>>x>>y>>l>>b;
        bitset<32>P(x);
        bitset<32>Q(y);
        l=l-1;
        b=b-1;
       for(ll i=l;i<=b;i++)
       {
           if(Q[i]==1)
            P[i]=Q[i];
       }
       ll sum=0;
       ll a=0;
        for(ll i=0;i<32;i++)
        {
           ;
            if(P[i]==1)
             sum+=(pow(2,a));
             a++;
        }
        cout<<sum<<endl;
    }
   

}