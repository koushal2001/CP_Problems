#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll t=-1;
ll ss[10];
bool isempty()
{
    if(t==-1)
     return true;
    return false; 
}
bool isfull()
{
   if(t==10)
    return true;
   return false; 
}
void push(int x)
{
    if(t<10)
    {
   ss[++t]=x;

    }
}
void pop()
{
   if(t!=-1) 
   t--;
}
void display()
{
  while(isempty()==false)
  {
      cout<<ss[t]<<endl;
      t--;
  }
}

int main()
{

push(10);
push(20);
push(50);
push(66);
pop();
display();
}