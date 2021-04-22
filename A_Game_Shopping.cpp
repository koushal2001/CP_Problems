#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll n,m;
  cin>>n>>m;
  ll c[n],a[m];
  queue<ll>q,u;
  for(ll i=0;i<n;i++)
  {
      cin>>c[i];
      q.push(c[i]);
  }
  for(ll i=0;i<m;i++)
  {
      cin>>a[i];
      u.push(a[i]);
  }
  ll count=0;
  while(!q.empty()&&!u.empty())
  {
      if(u.front()>=q.front())
      {
          count++;
          u.pop();    
      }
       q.pop();
  }
  
  cout<<count<<endl;
}
