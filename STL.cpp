#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  unordered_multiset<int>P;
  P.insert(100);
   P.insert(19);
    P.insert(100);
    P.insert(500);
     for (auto itr:P)
    {
        cout << itr <<" ";
    }
    cout << endl;
 
    // ll t;
    // cin>>t;
    // while(t--)
    // {
    //     ll n;
    //     cin>>n;
    //     vector<ll>P;
    //     ll a[n];
    //     for(ll i=0;i<n;i++)
    //     {
    //      cin>>a[i];
    //      P.push_back(a[i]);
    //     }
    //    cout<<*max_element(P.begin(),P.end());
    // }
}