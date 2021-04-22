#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(int n)
{
     for(int i=2;i*i<=n;i++)
     {
         if(n%i==0)
         {
            int count=0;
            while(n%i==0)
            {
                count++;
                n/=i;
            }
            cout<<i<<"^"<<count<<endl;
         }
        
     }
      if(n>1)
         {
             cout<<n<<"^"<<"1"<<endl;
         }
}
int main()
{
    int n;
    n=17;
    solve(n);
}