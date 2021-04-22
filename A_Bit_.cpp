#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;ll X=0;
    while(n--)
    {
        string s;
        cin>>s;
        if(s=="++X")
        {
           ++X;
        }
        else if (s=="X++")
        {
           X++;
        }
        else if(s=="X--")
        {
            X--;
        }
        else
        --X;
    }
    cout<<X<<endl;
}