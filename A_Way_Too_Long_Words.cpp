#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        string word;
        cin>>word;
        if(word.length()<=10)
        {
            cout<<word<<endl;
        }
        else
        {
            cout<<word[0]<<(word.length()-2)<<word[word.length()-1]<<endl;
        }
    }
}