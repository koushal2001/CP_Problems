#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 ll t;
 cin>>t;
 while(t--)
 {
     string a;
     do
     {
        getline(cin,a);
     } while (a.length()==0);
     map<char,ll>m;
     for(int i=0;i<a.length();i++)
     {
         m[a[i]++];
     }
     for(auto i:m)
     {
         cout<<i.first<<" "<<i.second<<endl;
     }
    //      if(i.second>1)
    //      {
    //          i.second=1;
    //      }
    //  }
    //  for(auto i:m)
    //  {
    //      cout<<i.first;
    //  }
    //  cout<<endl;

    
 }
}