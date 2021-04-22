#include <iostream>
using namespace std;
#define ll long long
int main() 
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll A,Y,X;
        cin>>A>>Y>>X;
	if(Y>A)
	 cout<<((A*X)+1)<<endl;
	else
	  cout<<((Y*X))<<endl;
    }
	return 0;
}
