
#include <bits/stdc++.h> 
using namespace std; 
void findSmallest(int m, int s) 
{ 
    int N=s;
	if (s == 0) 
	{ 
		(m == 1)? cout << 0 <<endl
				: cout << -1<<endl; 
		return ; 
	} 
	if (s > 9*m) 
	{ 
		cout << -1<<endl; 
		return ; 
	} 
	int res[m]; 
	s -= 1; 
	for (int i=m-1; i>0; i--) 
	{ 
		if (s > 9) 
		{ 
			res[i] = 9; 
			s -= 9; 
		} 
		else
		{ 
			res[i] = s; 
			s = 0; 
		} 
	} 
	res[0] = s + 1; 

	
	for (int i=0; i<m; i++) 
    {
        int c = 0; 
  
    int cnt[10] = { 0 }; 
    while (N > 0) { 
  
        
        int rem = N % 10; 
  
        
        cnt[rem]++; 
  
    
        N = N / 10; 
    } 
    for (int i = 0; i < 10; i++) { 
        if (cnt[i] > 1) { 
            c++; 
        } 
    } 
    if (c==0)
		cout << res[i]; 
    else
    {
        cout<<"-1"<<endl;
    }
        
    }
        cout<<endl;
} 

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int s=n;
         int count = 0;
    while (s != 0) 
    {
        s = s / 10;
        ++count;
    }
  
	findSmallest(count, n); 
    }
	return 0; 
} 
