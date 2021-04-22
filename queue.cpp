#include<bits/stdc++.h>
using namespace std;
class queue1
{
    int rear,front,n;
  public:
  queue1(int q)
  {
     rear=-1;
     front=-1;
     n=q;
  }
  int arr[];
  void push(int val)
  {
      if(front==-1&&rear==-1)
       {
           front++;
           rear++;
           arr[rear]=val;
       }
       else
       {
           rear++;
           arr[rear]=val;
       }
  }
  void pop()
  {
      front++;
  }
  void display()
  {
      if(rear>n-1)
      {
          cout<<"Overflow"<<endl;
      }
      else 
      {
           if(front>rear)
          {
              cout<<"Empty"<<endl;
          }
          else 
          {
      for(int i=front;i<=rear;i++)
      {
          cout<<arr[i]<<" ";
       
      }
      }
      }
  }
};
int main()
{
    int n;
    cin>>n;
  queue1 obj(n);
    obj.push(10);
  obj.push(20);
  obj.push(30);
   obj.pop();
  obj.pop();
 // obj.pop();
  obj.display();

}