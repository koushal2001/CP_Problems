#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
        ll n,m;
        cin>>n>>m;
        bool a[100000];
 	    memset(a, 0, sizeof(a)); 
        for(ll i=2;i*i<=m;i++)
        {
            if(a[i]==0)
            {
            for(ll j=i*i;j<=100000;j+=i)
            {
                a[j]=1;
            }
            }
        }
        for(ll i=n;i<=m;i++)
        {
            if(a[i]==0)
            {
                cout<<i<<" ";
            }
        }
}





// // C++ program to print all primes smaller than or equal to 
// // n using Sieve of Eratosthenes 
// #include <bits/stdc++.h> 
// using namespace std; 

// void SieveOfEratosthenes(int n) 
// { 
// 	// Create a boolean array "prime[0..n]" and initialize 
// 	// all entries it as true. A value in prime[i] will 
// 	// finally be false if i is Not a prime, else true. 
// 	bool prime[n+1]; 
// 	memset(prime, true, sizeof(prime)); 

// 	for (int p=2; p*p<=n; p++) 
// 	{ 
// 		// If prime[p] is not changed, then it is a prime 
// 		if (prime[p] == true) 
// 		{ 
// 			// Update all multiples of p greater than or 
// 			// equal to the square of it 
// 			// numbers which are multiple of p and are 
// 			// less than p^2 are already been marked. 
// 			for (int i=p*p; i<=n; i += p) 
// 				prime[i] = false; 
// 		} 
// 	} 

// 	// Print all prime numbers 
// 	for (int p=2; p<=n; p++) 
// 	if (prime[p]) 
// 		cout << p << " "; 
// } 

// // Driver Program to test above function 
// int main() 
// { 
// 	int n = 10000000; 
// 	cout << "Following are the prime numbers smaller "
// 		<< " than or equal to " << n << endl; 
// 	SieveOfEratosthenes(n); 
// 	return 0; 
// } 
