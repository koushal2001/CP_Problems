#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

void binarysearch(ll a[],ll key,ll beg,ll end)
{
    ll mid;
    while(beg<=end)
    {
    mid=beg+end;
   mid =mid/2;
   if(a[mid]==key)
   {
       cout<<"Element fount at "<<mid<<endl;
       break;
   }
   else if(key>a[mid])
   {
       beg=mid+1;
    //   binarysearch(a,key,beg,end);
   }
   else if(key<a[mid])
   {
        end=mid-1;
    //   binarysearch(a,key,beg,end);
   }
    }

}

int main()
{
  ll n;
  cin>>n;
  ll a[n];
  for(ll i=0;i<n;i++)
   cin>>a[i];
   ll key;
   cin>>key;
   binarysearch(a,key,0,n);
}