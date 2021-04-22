#include <iostream>
using namespace std;
#define ll long long
int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    string a,b;
	    cin>>a>>b;
         string s="";
         string p="";
         for(int i=2;i<a.size();i++)
         {
             s+=a[i];
         }
         p+=a[a.size()-2];
         p+=a[a.size()-1];
        for(int i=0;i<a.size()-2;i++)
         {
             p+=a[i];
         }
        s+=a[0];
        s+=a[1];
        if(s==b || p==b)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
        

	}
	return 0;
}