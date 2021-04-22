#include<bits/stdc++.h>
using namespace std;
class stac
{
  int top;
  public: 
  int n;
  stac(int p)
  {
      top=-1;
      n=p;
  }
   int stackkk[];
  void push(int ele)
  {
         top++;
         stackkk[top]=ele;
  }
  void pop()
  {
      if(top==-1)
       cout<<"Underflow";
       else
       {
           top=top-1;
       }
       
  }
  void display()
  {
      if(top>n-1)
      {
          cout<<"Overflow";
      }
      else 
      {
      for(int i=0;i<=top;i++)
      {
          cout<<stackkk[i]<<" ";
      }
      }
  }
};
int main()
{
    int p;
    cin>>p;
  stac obj(p);
  obj.push(100);
   obj.push(100);
   obj.push(100);
    obj.push(100);
  obj.display();

}