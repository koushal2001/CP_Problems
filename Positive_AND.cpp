#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
        ll n;
        cin>>n;
        ll a;
        ll count=0;
        vector<ll>P;
       
         for(ll i=1;i<=n;i++)
         {
              a=pow(2,i);
              if(a==n)
              {
                  cout<<"-1"<<endl;
                  count++;
                  break;
              }  
         } 
          if(count==0)
         {
         ll tmp;
         for(ll i=1;i<=n;i++)
         {
            P.push_back(i);
         }
        //  for(ll i=0;i<P.size();i++)
        //      {
        //            cout<<P[i]<<" ";
        //      }cout<<endl;
          for(ll i=1;i<=P.size();i++)
         {
             ll m=pow(2,i);
             if(m>P.size())
               break;
            if(m==P[m-1])
            {
                tmp=P[m-1];
                P[m-1]=P[m];
                P[m]=tmp;
            }
         }
             if(n==1)
              cout<<"1 ";
             if(n>1)
              cout<<"2 3 1 ";
           if(n>3)
           {
               
             for(ll i=3;i<P.size();i++)
             {
                   cout<<P[i]<<" ";
             }
           }
           cout<<endl;
           
          }
        
    }
}
