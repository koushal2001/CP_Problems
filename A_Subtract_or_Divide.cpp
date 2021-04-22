#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll q;
        cin>>q;
        ll a=0;
        if(q==1)
        {
            cout<<"0"<<endl;
        }
        else if(q==2)
        {
            cout<<"1"<<endl;
        }
        else if(q==3)
        {
            cout<<"2"<<endl;
        }
        else
        {
           if(q%2==0)
           {
               cout<<"2"<<endl;
           }
           else
           {
               cout<<"3"<<endl;
           }
        }
}
}