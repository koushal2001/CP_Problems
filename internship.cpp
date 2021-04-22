#include<bits/stdc++.h>  //pre processor directive
using namespace std;
#define ll long long   //setting long long to ll
int main()
{
    ll n;//declaring a variable n
    cin>>n;//input taken from user
    ll a[n];//declaring array of size n
    ll remaining_sum=0;  //initializing remaining to 0 this variable will be used to get sum of n-1 integers
    for(ll i=0;i<n-1;i++)
    {
     cin>>a[i];//n-1 space seprated integers taken from user
     remaining_sum+=a[i];//adding each element to remaining_sum variable
    }
     ll total_sum=(n*(n+1))/2;//assigning sum of n terms in total_sum variable
    cout<<total_sum-remaining_sum<<endl;/*printing the missing element which will be equal to difference
                                         of sum of n terms and sum of n-1 terms*/
}