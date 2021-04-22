#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    vector<vector<int>>trust;
     for(int i=0;i<trust.size();i++)
        {
            for(int j=0;j<trust[i].size();j++)
            {
                cin>>trust[i][j];
                 cout<<trust[i][j];
            }
        }
        // for(int i=0;i<trust.size();i++)
        // {
        //     for(int j=0;j<trust[i].size();j++)
        //     {
        //         cout<<trust[i][j];
        //     }
        // }
    //  vector<int>P,Q;
    //     for(int i=0;i<trust.size();i++)
    //     {
    //         for(int j=0;j<trust[i].size();j++)
    //         {
    //             if(j==2)
    //             {
    //                 P.push_back(trust[i][j]);
    //             }
    //             if(j==1)
    //             {
    //                 Q.push_back(trust[i][j]);
    //             }
    //         }
    //     }
    //     map<int,int>M;
    //     for(int i=0;i<P.size();i++)
    //     {
    //         M[P[i]]++;
    //     }
    //     int max=0;
    //     for(auto i:M)
    //     {
    //         if(i.second>max)
    //         {
    //             max=i.second;
    //         }
    //     }
    //     bool flag=1;
    //     for(int i=0;i<Q.size();i++)
    //     {
    //         if(max==Q[i])
    //         {
    //          flag=0; 
    //          break;
    //         }
    //     }
    //     if(flag==0)
    //     {
    //         cout<< "-1"<<endl;
    //     }
    //     else
    //         cout<<max<<endl;
    
}