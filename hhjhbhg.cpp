// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll n,k;
//         cin>>n>>k;
//         ll a[n];
//         for(ll i=0;i<n;i++)
//          cin>>a[i];
//         ll count=0;
//         for(ll i=0;i<n;i++)
//         {
//             if(a[i]%2==0)
//             {
//                 a[i]=a[i]/2;
//                 count++;
//             }
//             else
//             {
//                 a[i]=a[i]*2;
//                 count++;
//             }
//             if(count==k)
//              break;
//         } 
//         vector<ll>P;
//         for(ll i=0;i<n;i++)
//         {

//             ll m=a[i]/2;
//             cout<<m;
//             P.push_back(m);
//         }
       
//         map<ll,ll>M;
//         for(ll i=0;i<P.size();i++)
//         {
//             M[P[i]]++;
//         }
//         ll o=INT_MIN;
//         for(auto i:M)
//         {
//             if(i.second>o)
//             {
//                 o=i.second;
//             }

//         }
//         cout<<o<<endl;
//     }

// }


#include <iostream> 
# include <vector> 
using namespace std; 
void printSubArrays(vector<int> arr, int start, int end) 
{       
    // Stop if we have reached the end of the array      
    if (end == arr.size())  
        return; 
        
    // Increment the end point and start from 0  
    else if (start > end)  
        printSubArrays(arr, 0, end + 1); 
            
    // Print the subarray and increment the starting point  
    else
    { 
        cout << "["; 
        for (int i = start; i < end; i++){ 
            cout << arr[i] << ", "; 
        } 
          
        cout << arr[end] << "]" << endl; 
        printSubArrays(arr, start + 1, end); 
    } 
      
    return; 
} 
  
int main() 
{ 
   vector<int> arr = {9,6,3,8}; 
   printSubArrays(arr, 0, 0); 
   return 0; 
} 