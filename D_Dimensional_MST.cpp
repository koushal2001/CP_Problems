#include <bits/stdc++.h>
using namespace std;
#define ll long long
int minKey(ll k[], bool S[],ll n) 
{ 
	ll a = INT_MAX, b; 
	for (ll i = 0; i < n; i++) 
		if (S[i] == false && k[i] < a) 
			a = k[i], b = i; 

	return b; 
} 
int main() 
{ 
   ll n;
    cin>>n;
    ll d;
    cin>>d;
    ll a[n][d];
    ll m[n][n]={};
    ll total=0;
    for(ll i=0;i<n;i++)
    {   
    for(ll j=0;j<d;j++)
    {
      cin>>a[i][j];
    }
    } 

    for(ll k=0;k<n;k++)
    {
    for(ll i=0;i<n;i++)
    {   total=0;
    for(ll j=0;j<d;j++)
    {
       ll m=a[k][j];
         total=total+abs(m-a[i][j]);
    }
      m[k][i]=(-total);
    }
   
    }
  ll p[n]; 
	ll k[n]; 
	bool S[n]; 
	for (ll i = 0; i < n; i++) 
		k[i] = INT_MAX, S[i] = false; 
	k[0] = 0; 
	p[0] = -1;
	for (int c = 0; c < n - 1; c++)
	{ 
		 int u = minKey(k, S,n); 
		S[u] = true;
		for (int v = 0; v < n; v++) 

			if (m[u][v] && S[v] == false && m[u][v] < k[v]) 
				p[v] = u, k[v] = m[u][v]; 

	} 
  ll sum=0;
	for (ll i = 1; i < n; i++) 
		sum+=m[p[i]][i];
  cout<<(sum*-1)<<endl;  
	return 0; 
} 
