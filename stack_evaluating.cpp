#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string a;
    cin>>a;
    stack<ll>P;
    for(ll i=0;i<a.length();i++)
    {
        if(isdigit(a[i]))
        {
             P.push(a[i]-48);
        }
        else
        {
             ll q=P.top();
             P.pop();
             ll t=P.top();
             P.pop();
              ll sum;
             if(a[i]=='+')
               sum= q+t;
             else if(a[i]=='-')
               sum= t-q;
             else if(a[i]=='/')
               sum= t/q;
             else if(a[i]=='*')
               sum= q*t;
             else if(a[i]=='^')
               sum= t^q;
              P.push(sum);
        } 
    }
    cout<<P.top()<<endl;
    
}