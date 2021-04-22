#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    cout<<"2"<<endl;
    ll count=1;
    bool f=0;
    for(int i=3;;i++)
    {
        f=0;
      for(int j=2;j<i;j++)
      {
          if(i%j==0)
          {
              f=1;
              break;
          }
          
      }
      if(f==0)
      {
          count++;
          cout<<i<<endl;
      }
      if(count==n)
      {
       break;
      }
    }
}