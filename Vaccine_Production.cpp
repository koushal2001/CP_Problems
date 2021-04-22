#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll d1,v1,d2,v2,total;
    cin>>d1>>v1>>d2>>v2>>total;
    ll sum=0;
    ll day=1;
    while(sum<total)
    {
       if(d1==day&&d2==day)
       {
          sum+=v1+v2;
          day++;
          d1++;
          d2++;
       }
       else if(d1==day)
       {
          sum+=v1;
          day++;
          d1++;
       }
       else if(d2==day)
       {
           sum+=v2;
           day++;
           d2++;
       }
       else
       {
           day++;
       }
       
    }
    cout<<day-1<<endl;
}