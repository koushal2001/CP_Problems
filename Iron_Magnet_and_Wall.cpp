#include <bits/stdc++.h> 
using namespace std; 
#define ll long long
int main()
{ 
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k; 
        string s;
        cin>>s;
       ll i=0,j=0;
       ll count=0;
       ll sum=0;
       while(i<n&&j<n)
       {
           if(s[i]=='I')
           {
             if(s[j]=='M')
             {
                 if(i>j)
                 {
                     for(ll p=j;p<=i;p++)
                     {
                         if(s[p]==':')
                          count++;
                     }
                 }
                 else
                 {
                      for(ll p=i;p<=j;p++)
                     {
                         if(s[p]==':')
                          count++;
                     }
                 }
                 
                ll power=k+1-(abs(i-j))-count;
                if(power>0)
                {
                    sum++;
                   // cout<<count<<" "<<i<<" "<<j<<endl;
                    count=0;
                    i++;
                    j++;
                }
                else
                {
                    if(i>j)
                    {
                        j++;
                    }
                    else
                    {
                        i++;
                    }
                    count=0;
                    
                }  
                
             }
             else if(s[j]=='X')
             {
                      i=j;
                      i++;
                      j++;
             }
             else
             {
                 j++;
             }
             
           }
           else if(s[i]=='X')
           {
                      j=i;
                      i++;
                      j++;
           }
           else
           {
               i++;
           }
           
       }
       cout<<sum<<"\n";
    }
        
    
}

