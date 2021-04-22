#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 ll t;
 cin>>t;
 while(t--)
 {
     string s,p;
     cin>>s>>p;
      if(s.find(p)!=-1) 
        cout<< s.find(p)<<endl;
      else 
        cout<<"-1"<<endl;
 }
}