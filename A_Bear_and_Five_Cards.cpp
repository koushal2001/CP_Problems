#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t1,t2,t3,t4,t5;
    cin>>t1>>t2>>t3>>t4>>t5;
    ll a[5]={};
    a[0]=t1;
    a[1]=t2;
    a[2]=t3;
    a[3]=t4;
    a[4]=t5;
    ll sum=a[0]+a[1]+a[2]+a[3]+a[4];
    sort(a,a+5,greater<ll>());
    ll total=0;
    ll count=0;
    vector<ll>P;
    for(ll i=0;i<5;i++)
    {
       total=0,count=0;
       for(ll j=0;j<5;j++)
       {
          if(a[i]==a[j]&&count<3)
          {
             total+=a[j];
             count++;
          }
          if(j==4&&total==a[i])
          {
             total-=a[i];
          }
       }
       P.push_back(total);
    }
    sort(P.begin(),P.end(),greater<ll>());
   cout<<sum-P[0]<<endl;
}