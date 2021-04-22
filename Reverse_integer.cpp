#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll m;
        cin>>m;
        ll count=0;
        ll num=0;
        if(m<0)
        {
            m=(m)*(-1);
            count++;
        }
            while(m>0)
            {
                num=num*10+m%10;
                m=m/10;
            }
            if(count==0)
            {
                cout<<num<<endl;
            }
            else
            {
                cout<<"-"<<num<<endl;
            }
            

        
    }
}