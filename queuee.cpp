#include <bits/stdc++.h>
#define ll long long
using namespace std;

class q
{
   public:
   ll rear=-1,front=0;
   ll a[10];
   void push(int);
   void pop();
   void display();
};
void q::push(int x)
{
   a[++rear]=x;
}
void q::pop()
{
    front++;
}
void q::display()
{
    for(ll i=front;i<=rear;i++)
     cout<<a[i]<<endl;
}
int main()
{
    q P;
    P.push(10);
    P.push(20);
    P.push(30);
//P.pop();
    P.display();
}