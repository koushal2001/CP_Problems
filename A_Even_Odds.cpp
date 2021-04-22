#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ll n,k;
   cin>>n>>k;
   if(n%2==0)
   {
       if(k<=n/2)
       {
          cout<<(2*k)-1;
       }
       else
       {
          ll p= k-(n/2);
          cout<<2*p;
       }
   }
   else
   {
      if(k<=(n+1)/2)
       cout<<(2*k)-1;
      else
      {
          ll o=k-((n/2)+1);
          cout<<2*o;
      } 
        
   }
}