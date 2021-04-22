#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  string s,a;
  cin>>s>>a;
  for(ll i=0;i<a.length();i++)
  {
      if(isupper(a[i]))
      {
         a[i]=tolower(a[i]);
      }
  }
  for(ll i=0;i<s.length();i++)
  {
      if(isupper(s[i]))
      {
         s[i]=tolower(s[i]);
      }
  }
  if(s<a)
   cout<<"-1"<<endl;
  else if(s>a)
   cout<<"1"<<endl;
   else
   cout<<"0"<<endl; 
}