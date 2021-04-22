#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool isDigitPresent(int x, int d) 
{ 
    
    while (x > 0) 
    { 
        if (x % 10 == d) 
            break; 
  
        x = x / 10; 
    } 
   return (x > 0); 
} 
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll q,d;
        cin>>q>>d;
        ll a[q];
        for(ll i=0;i<q;i++)
         cin>>a[i];
         bool f=0;
        for(ll i=0;i<q;i++)
         {
             if(isDigitPresent(a[i],d))
             {
                  f=0;
               //   cout<<"kk";
             }
             else 
             {
            while(!isDigitPresent(a[i],d))
            {
                if(isDigitPresent(a[i],d))
                 {
                     f=0;
                     break;
                 }
                if(a[i]<0)
                {
                  f=1;
                  break;
                }
                a[i]=a[i]-d;
              //  cout<<a[i]<<" ";
                
            }
            if(isDigitPresent(a[i],d))
                 {
                     f=0;
                    
                 }
             }
             if(f==0)
              cout<<"YES"<<endl;
             else
              cout<<"NO"<<endl; 
         } 
      //  cout<<endl;
        
    }
}