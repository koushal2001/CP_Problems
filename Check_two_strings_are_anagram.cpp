#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 ll t;
 cin>>t;
 while(t--)
 {
     string a,b;
     cin>>a>>b;
    map<char,ll>m;
    int flag=0;
    if(a.length()!=b.length())
    {
        cout<<"NO"<<endl;
    }
    else
    {
    for(int i=0;i<a.length();i++)
    {
        m[a[i]]++;
    }
     for(int i=0;i<b.length();i++)
    {
        m[b[i]]--;
    }
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
        if(i.second!=0)
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    
   }
     
 }
     
 }