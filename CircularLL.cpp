#include<bits/stdc++.h>
using namespace std;
class node
{
  int data;
  node *next;
  node(int value)
  {
      data=value;
      next=NULL;
  }
  friend class LL;
};
class LL
{
   node *head;
   node *tail;
   int count;
   public:
   LL()
   {
       head=NULL;
       tail=NULL;
       count=0;
   }
   void insert_beg(int val)
   {
       node *n=new node(val);
       if(head==NULL)
       {
          head=n;
          tail=n;
       }
       else
       {
           n->next=head;
           tail->next=n;
           head=n;
       } 
       count++; 
   }
   void insert_end(int data)
   {
       node *n =new node(data);
       tail->next=n;
       n->next=head;
       tail=n;
   }
   void display()
   {
       node *p=head;
       do
       {
           cout<<p->data<<" ";
           p=p->next;
       }while(p!=head);
       cout<<endl<<count;
   }
};
int main()
{
 LL obj;
 obj.insert_beg(100);
 obj.insert_beg(11);
 obj.insert_beg(66);
 obj.insert_beg(44);
 obj.insert_end(10000);
 obj.display();
}