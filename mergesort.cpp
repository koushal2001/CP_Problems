#include <bits/stdc++.h>
#define ll long long
using namespace std;

void merge(ll a[],ll l,ll h,ll mid)
{
   ll i=l;
   ll j=mid+1;
   ll k=l;
   ll b[100];
   while(i<=mid&&j<=h)
   {
       if(a[i]<a[j])
       {
           b[k++]=a[i++];
       }
       else
       {
            b[k++]=a[j++];
       }
   }
   while(i<=mid)
    b[k++]=a[i++];
   while(j<=h)
    b[k++]=a[j++];
    for(ll i=l;i<=h;i++)
     a[i]=b[i];
}
void mergesort(ll a[],ll l,ll h)
{
   if(l<h)
   {
       ll mid=l+h;
       mid=mid/2;
       mergesort(a,l,mid);
       mergesort(a,mid+1,h);
       merge(a,l,h,mid);
   }
}

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
     cin>>a[i];
    mergesort(a,0,n-1); 
    for(ll i=0;i<n;i++)
     cout<<a[i]<<" ";
}