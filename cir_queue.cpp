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
  void push(int data)
  {
      if(front==0&&rear==n-1||front==rear+1)
      {
          cout<<"Overflow"<<endl;
      }
      else if(rear==n-1)
      {
        rear=0;
      }
      else if(rear==-1)
      {
          rear=0;
          front=0;
      }
      else
      {
          rear++;
      }
      arr[rear]=data;
      
  }
};