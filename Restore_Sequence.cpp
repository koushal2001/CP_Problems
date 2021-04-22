#include <bits/stdc++.h> 
using namespace std; 
#define ll long long
int main()
{ 
	ll q = 2000000;  
    vector<ll>P;
	bool prime[q+1]; 
	memset(prime, true, sizeof(prime)); 

	for (ll p=2; p*p<=q; p++) 
	{ 
		
		if (prime[p] == true) 
		{ 
			for (ll i=p*p; i<=q; i += p) 
				prime[i] = false; 
		} 
	} 

	for (ll p=2; p<=q; p++) 
	if (prime[p]) 
		P.push_back(p);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=1;i<=n;i++)
         cin>>a[i];
        vector<ll>b;
        ll count=0;
        for(ll i=0;count<n;i++)
        {
           b.push_back(P[i]);
           count++;
        } 
       for(ll i=1;i<=n;i++)
       {
           if(a[i]==i)
           {
               continue;
           }
           else
           {
               b[i-1]=b[a[i]-1];
           }
           
       }
       for(ll i=0;i<b.size();i++)
       cout<<b[i]<<" ";
       cout<<endl;
    }
} 
