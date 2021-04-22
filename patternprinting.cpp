#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    void nextPermutation(vector<int>& nums) {
       string s="";
        string a="";
        for(int i=0;i<nums.size();i++)
        {
            s+=to_string(nums[i]);
            a+=to_string(nums[i]);
        }
        do
        {
            if(s==a)
            {
                continue;
            }
            else
            {cout<<s;
                cout<<"[";
                for(int i=0;i<s.length();i++)
                {
                    if(i==s.length()-1)
                    {
                    cout<<s[i];
                    }
                    else
                    {
                      cout<<s[i]<<",";   
                    }
                }
                cout<<"]";
                break;
            }
        }while(next_permutation(s.begin(),s.end()));
    }
    
}