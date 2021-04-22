#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
      ll a;
      cin>>a;
      int b[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
      string c[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
      for(int i=12;i>=0;i--)
      {
          int q=a/b[i];
          if(q>0)
          { 
              a=a%b[i];
          for(int j=0;j<q;j++)
          {
             cout<<c[i];
          }
          }
      }

        
    }
}