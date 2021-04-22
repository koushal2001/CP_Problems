#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string a;
        cin>>a;
        string m[]={"0000","0001","0010","0011","0100","0101","0110","0111","1000","1001","1010","1011","1100","1101","1110","1111"};
        string s="abcdefghijklmnop";
        ll count=0;
        string l="";
        for(ll i=0;i<a.length();i++)
        {
            l+=a[i];
             count++;
             if(count==4)
             {
                 for(ll j=0;j<16;j++)
                 {
                     if(l==m[j])
                     {
                       cout<<s[j];
                        break;
                     }
                 }
                 l="",count=0;
             }
        }
       cout<<endl;
    }
}