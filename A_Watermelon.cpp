#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll w;
    cin>>w;
    if(w==1||w==2)
    {
       cout<<"NO"<<endl;
    }
    else
    {
        if(w%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
             cout<<"NO"<<endl;
        }
    }
}
