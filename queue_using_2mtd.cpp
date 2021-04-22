#include<bits/stdc++.h>
using namespace std;
class queue1
{
    int rear,front,n;
    int count;
  public:
  queue1(int q)
  {
     rear=-1;
     front=-1;
     n=q;
     count=0;
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
       count++;
  }
  void pop()
  {
      for(int i=front;i<rear;i++)
      {
          arr[i]=arr[i+1];
      }
      rear--;
      count--;
  }
  void display()
  {
      if(rear<front)
      {
          cout<<"Empty"<<endl;
      }
      else if(count>n)
      {
        cout<<"Overflow"<<endl;
      }
    else 
    {
      for(int i=front;i<=rear;i++)
      {
          cout<<arr[i]<<" ";
       
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
    obj.push(100);
    obj.pop();
    obj.pop();
    obj.display();

}