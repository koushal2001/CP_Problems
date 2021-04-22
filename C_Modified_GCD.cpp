#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ll a,b;
   cin>>a>>b;
   ll q;
   cin>>q;
   while(q--)
   {
       ll low,high;
       cin>>low>>high;
       ll max=0;
       for(ll i=low;i<=high;i++)
       {
           if(a%i==0&&b%i==0)
           {
              if(i>max)
              {
                  max=i;
              }
           }
       }
       if(max==0)
        max=-1;
       cout<<max<<endl;
   }
}