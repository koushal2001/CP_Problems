#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
#define PI  3.14159265358979323846
#define MOD 1000000007
ll ssum(ll n) {return (n * (n + 1)) / 2;}
ll gcd(ll a, ll b) {if (b == 0)return a; return gcd(b, a % b);}
ll lcm(ll a,ll b){return (a*b)/(__gcd(a,b));}

ll front=-1,rear=-1;
bool isfull(ll n)
{
   if(front==0&&rear==n-1||front==rear+1)
   return true;
  return false; 
}

bool isempty()
{
    if(rear==-1&&front==-1)
	 return true;
	return false; 
}

void push(ll a[],ll val,ll n)
{
   if(isfull(n))
    return;
   else if(isempty())
   {
	   //cout<<"i";
	   front=0;
	   ++rear;
	   a[rear]=val;
   }	
   else if(rear==n-1&&front!=0)
   {
	  // cout<<"k";
       rear=-1;
	   ++rear;
	   a[rear]=val;
   }	 
   else
   {
	 //  cout<<"h";
	   a[++rear]=val;
   }
}

void pop()
{
	if(isempty())
	{
		return;
	}
	else 
	{
		front++;
	}
}

void display(ll a[],ll n)
{
   if(rear>=front)
   {
	   for(ll i=front;i<=rear;i++)
	    cout<<a[i]<<" ";
   }
   else
   {
	   for(ll i=front;i<n;i++)
	   {
		   cout<<a[i]<<" ";
	   }
	   for(ll i=0;i<front;i++)
	    cout<<a[i]<<" ";

   }
}

void solve()
{
     ll n;
	 cin>>n;
	 ll a[n];
	 push(a,10,n);
	 push(a,10,n);
	 push(a,10,n);
	 push(a,10,n);
	 push(a,10,n);
	 display(a,n);
	 cout<<endl;
	 pop();
	 pop();
	 display(a,n);
	 cout<<endl;
	 push(a,20,n);
	 push(a,20,n);
	  push(a,20,n);
	  display(a,n);
	 cout<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}