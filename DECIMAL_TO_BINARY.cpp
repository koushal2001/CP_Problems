#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
 string a;
 a=bitset<16>(n).to_string();
 int count=0;
 for(int i=0;i<a.length();i++)
 {
    if(a[i]!='0')
     {
         count=i;
         break;
     }
     
 }
 for(int i=count;i<a.length();i++)
  cout<<a[i];
  cout<<endl;

    }
}