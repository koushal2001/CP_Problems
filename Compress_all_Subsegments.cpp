#include <bits/stdc++.h> 
using namespace std; 
#define ll long long
// ll setBitNumber(ll n) 
// { 
// 	if (n == 0) 
// 		return 0; 

// 	ll msb = 0; 
// 	n = n / 2; 
// 	while (n != 0) { 
// 		n = n / 2; 
// 		msb++; 
// 	} 

// 	return (1 << msb); 
// } 
int main() 
{ 
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[n];
    }
	vector<ll>P;
	for(ll i=0;i<n-1;i++)
	{
		ll c=a[i]^a[i+1];
		P.push_back(c);
	}
    
	// cout << setBitNumber(c); 
	// return 0; 
} 
