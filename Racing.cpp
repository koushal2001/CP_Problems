#include <iostream>
using namespace std;
#define ll long long
int main() 
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        b=b*60;
        c=c*60;
        ll div=0,mod=0;
        ll time=0;
        if(b>a)
        {
         div=b/a;
         mod=b%a;
        
      time=(2*a*div)-a;
        
        if(mod!=0)
        {
           time+=(2*(mod));
        }
        }
        else
        {
            time=b;
        }
       if(time<=c)
        cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl; 

    }
}