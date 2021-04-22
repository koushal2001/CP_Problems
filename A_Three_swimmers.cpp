#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll p,a,b,c;
        cin>>p>>a>>b>>c;
        if(p<a&&p<b&&p<c)
        {
            ll smallest=min(a,b);
            ll z=min(smallest,c);
            cout<<z-p<<endl;
        }
        else if(p==a||p==b||p==c)
         cout<<"0"<<endl;
        else
        { 
        ll m=p/a,n=p/b,l=p/c,k=0;
          if(p%a!=0)
          {
              m++;
          }
          if(p%b!=0)
          {
              n++;
          }
            if(p%c!=0)
          {
              l++;
          }
          a=a*m;
          b=b*n;
          c=c*l;
          a=abs(p-a);
          b=abs(p-b);
          c=abs(p-c);
          ll y=min(a,b);
          ll i=min(y,c);
          cout<<i<<endl;
        }

    }
}