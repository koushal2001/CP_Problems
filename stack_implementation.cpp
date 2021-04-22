#include<bits/stdc++.h>
#define ll long long
using namespace std;

class stackkkk
{
    public:
   ll top;
   ll n;
   stackkkk(ll s)
   {
       top=-1;
       n=s;
   } 
   ll a[];
     bool isempty1()
   {
       if(top==-1)
        return true;
       return false; 
   }
   bool isfull1()
   {
       if(top==n)
        return true;
       return false; 
   }
   void push(ll value)
   {
       if(isfull1())
       {
           cout<<"FULL"<<endl;
       }
       else 
       {
       top++;
       a[top]=value;
       }
   }
   void pop()
   {
       if(isempty1())
       {
           cout<<"Nothing to delete"<<endl;
       }
       else 
       top--;
   }
   void peek()
   {
       cout<<a[top]<<endl;
   }
   void display()
   {
       while(!isempty1())
       {
           cout<<a[top]<<endl;
           pop();
       }
   }
 
};
int main()
{
    ll n;
    cin>>n;
   stackkkk obj(n);
   obj.push(11);
    obj.push(1);
     obj.push(100);
     obj.pop();
     obj.display();


}