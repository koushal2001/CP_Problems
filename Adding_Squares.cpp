#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll numberOfSquares(ll X[], vector<ll>Y,ll N, ll M)
{
	unordered_map<ll, ll> m1, m2;
	ll i, j, ans = 0;
	for (i = 0; i < N; i++) {
		for (j = i + 1; j < N; j++) {

			ll dist = abs(X[i] - X[j]);
			m1[dist]++;
		}
	}
	for (i = 0; i < Y.size(); i++) {
		for (j = i + 1; j < Y.size(); j++) {

			ll dist = abs(Y[i] - Y[j]);
			m2[dist]++;
		}
	}
	for (auto i :m1) 
    {
		if (m2.find(i.first)!= m2.end()) {
		    ans++;
		}
	}
return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll w,h,n,m;
    cin>>w>>h>>n>>m;
    ll X[n];
    ll Y[m+1];
    vector<ll> Q;
    for(ll i=0;i<n;i++)
     cin>>X[i];
    for(ll i=0;i<m;i++)
    {
      cin>>Y[i]; 
      Q.push_back(Y[i]);
    }
      ll pos=0;
      ll ANS=0;
	for(ll i=0;i<=h;i++)
    {
       if(find(Q.begin(),Q.end(),i)==Q.end()) 
       {
            Q.push_back(i);
            ANS=max(ANS,numberOfSquares(X, Q, n, m));
            Q.pop_back();
       }
    }
    cout<<ANS<<"\n";
	return 0;
}