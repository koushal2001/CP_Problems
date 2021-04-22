#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool isPrime(int n) 
{ 
   
    if (n <= 1) 
        return false; 
  
    for (int i = 2; i*i <= n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
} 
  
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
     cin>>a[i];
    ll count=0; 
    for(ll i=0;i<n;i++)
    {
        for(ll b=a[i],c=a[i];;b--,c++)
        {
            if(b>=0&&isPrime(b))
            {
                count+=abs(a[i]-b);
                break;
            }
            else if(isPrime(c))
            {
                count+=abs(a[i]-c);
                break;
            }
        }
    } 
    cout<<count<<endl;

}