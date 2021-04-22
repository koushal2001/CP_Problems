#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll partison(ll a[],ll l,ll h)
{
    ll pivot=a[l];
    ll i=l,j=h+1;
    while(i<j)
    {
        do
        {
            i++;
        } while(a[i]<pivot);
     
        do
        {
           j--; 
        }  while(a[j]>pivot);
       if(i<j)
        swap(a[i],a[j]);
    }
    swap(a[l],a[j]);
    return j;
}

void qsort(ll a[],ll l,ll h)
{
   if(l<h)
   {
      ll p= partison(a,l,h);
       qsort(a,l,p-1);
       qsort(a,p+1,h);
   }
}

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
     cin>>a[i];
    qsort(a,0,n-1);
    for(ll i=0;i<n;i++)
      cout<<a[i]<<" "; 
}