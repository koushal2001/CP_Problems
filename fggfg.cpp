#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
        string s;
		cin>>s;
		vector<int>P;
		for(ll i=0;i<s.length();i++)
		{
          P.push_back(s[i]-48);
		}
		for(ll i=0;i<P.size();i++)
		{
              cout<<P[i];
		}
	}
}