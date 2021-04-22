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
  int count;
     for(int i=0;i<a.length();i++)
     {
         count=0;
         if(b[0]==a[i])
         {
             for(int k=0;k<b.length();k++)
             {
                     if(b[k]!=a[k+i])
                     {
                         count=0;
                         break;
                     }
                     else
                     {
                         count=i;
                     }
             }
             if(count>0)
             break;
           
         }
         
     }
     if(count==0&&a!=b)
     {
         cout<<"-1"<<endl;
     }
     else if(count==0 && a==b)
     {
         cout<<"0"<<endl;
     }
     else
     {
        cout<< count<<endl;
     }
     
 }
}