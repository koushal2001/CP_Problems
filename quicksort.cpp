#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll partision(ll a[],ll l,ll h)
{
    ll pivot=a[l];
    ll i=l,j=h;
    while(i<j)
    {
        do
        {
           i++;
        } while (a[i]<pivot);
        do 
        {
           j--;
        }while(a[j]>pivot);

        if(i<j)
         swap(a[i],a[j]);
        
         
    }
   // if(i>j)
    swap(a[l],a[j]);
    return j;
}
void quicksort(ll a[],ll l,ll h)
{
    if(l<h)
    {
        ll q=partision(a,l,h);
        quicksort(a,l,q);
        quicksort(a,q+1,h);
    }
}

int main()
{
  ll n;
  cin>>n;
  ll a[n];
  for(ll i=0;i<n;i++)
    cin>>a[i];
   quicksort(a,0,n); 
   for(ll i=0;i<n;i++)
    cout<<a[i]<<" ";
}