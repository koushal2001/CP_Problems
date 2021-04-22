#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define N 101
using namespace std;
int arr[N][N],I[N][N];

void multiply(int a[][N],int b[][N],int r)
{
    int c[r+1][r+1];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            c[i][j]=0;
            for(int k=0;k<r;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            a[i][j]=c[i][j];
        }
    }
}



void product(int a[][N],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
             I[i][j]=1;
            else 
             I[i][j]=0; 
        }
    }
    for(int i=0;i<m;i++)
     multiply(I,a,n);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        product(a,n,m);
    }
}