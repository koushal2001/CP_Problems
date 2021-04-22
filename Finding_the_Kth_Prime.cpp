#include <bits/stdc++.h> 
using namespace std; 

vector<int>P;

void SieveOfEratosthenes(int n) 
{ 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    for (int p=2; p<=n; p++) 
       if (prime[p]) 
         P.push_back(p);
} 
  
int main() 
{ 
    int n = 87000008; 
    int q;
    cin>>q;
    SieveOfEratosthenes(n);
     int pos;
  while(q--)
  {
       cin>>pos;  
       cout<<P[pos-1]<<endl;
  }
   
} 