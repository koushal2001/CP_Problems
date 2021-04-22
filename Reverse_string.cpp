#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 ll t;
 cin>>t;
 while(t--)
 {
   string s;
   string p={};
   ll count=0;
   do {
     getline(cin,s);
   }while(s.length()==0);
  for(ll i=s.length()-1;i>=0;i--)
  {
    if(s[i]=='.')
    {
     for(ll j=i+1;j<i+count+1;j++)
     {
     	 p+=s[j];
     }
      p+='.';
      count=0;
    //  }
    }
    else
    {
    	count++;
 
    }
  }
  cout<<p;
  if(s[0]!='.')
  {
 for(ll i=0;i<count;i++)
 {
 	cout<<s[i];
 }
  }
 
 }
 return 0;
}