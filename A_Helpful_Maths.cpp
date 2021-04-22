#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   string s;
   cin>>s;
   vector<int>P;
   for(ll i=0;i<s.length();i++)
   {
       if(s[i]!='+')
       {
           P.push_back(s[i]-48);
       }
   }
   sort(P.begin(),P.end());
   for(ll i=0;i<P.size();i++)
   {
       if(i!=P.size()-1)
       cout<<P[i]<<"+";
       else
        cout<<P[i];
   }
}