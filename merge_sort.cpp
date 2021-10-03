#include<bits/stdc++.h>
using namespace std;


void merge(int arr[],int l, int m,int r)
{
    int left[m-l+1];
    int right[r-m];
    for(int i=0;i<m-l+1;i++)
    {
        left[i]=arr[l+i];
    }
    for(int i=0;i<r-m;i++)
    {
        right[i]=arr[m+1+i];
    }
    int one=0;
    int two=0;
    int start=l;
    while(one<m-l+1 && two<r-m)
    {
        if(left[one]<=right[two])
        {
            arr[start]=left[one];
            one++;
        }
        else
        {
            arr[start]=right[two];
            two++;
        }
        start++;
    }
    while(one<m-l+1)
    {
        arr[start]=left[one];
        start++;
        one++;
    }
    while(two<r-m)
    {
        arr[start]=right[two];
        start++;
        two++;
    }
}

void mergesort(int arr[],int l,int r)
{
    if(l>=r)return;
    else
    {
        int mid=(l+r)/2;
        mergesort(arr,0,mid);
        mergesort(arr,mid+1,r);
        merge(arr, l, mid, r);
    }
}
int main()
{
    int n=0;
    cin>>n;
    int arr[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<'\n';
    return 0;
}