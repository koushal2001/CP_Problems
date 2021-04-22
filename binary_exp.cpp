#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve(ll base,ll power)
{
    ll result=1;
    while(power!=0)
    {
   if(power%2==0)
   {
      base*=base;
      power/=2;
   }
   else
   {
       result*=base;
       power--;
   }
    }
   cout<<result<<endl;
   
}
int main()
{
   ll base=2;
   ll power=2;
   solve(base,power);
}