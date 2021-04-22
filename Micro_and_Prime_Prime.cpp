#include<bits/stdc++.h>
using namespace std;
int pp[1000001];
void SieveOfEratosthenes(int n) 
{ 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
     prime[0]=prime[1]=false;
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        {  
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
     int count=0;
        for(int i=1;i<=n;i++)
        {
             if (prime[i])
             { 
               count++;
             }
           if(prime[count])
          {
          pp[i]=true;
          }
           else
          pp[i]=false;
        }
        for(int i=1;i<=n;i++)
        {
            pp[i]+=pp[i-1];
        }
} 
  
int main()
{
    int t;
    cin>>t;
    SieveOfEratosthenes(1000001); 
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        cout<<pp[n]-pp[m-1]<<endl;
    }
}