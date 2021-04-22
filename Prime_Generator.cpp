#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,m;
        cin>>m>>n;
        bool a[n+1];
        memset(a,0, sizeof(a)); 
        a[1]=1;
        for(int i=2;i*i<=n;i++)
        {
            if(a[i]==0)
            {
                for(int j=i*i;j<=n;j+=i)
                {
                    a[j]=1;
                }
            }
        }
        for(int i=m;i<=n;i++)
        {
            if(a[i]==0)
            cout<<i<<" ";
        }
}
