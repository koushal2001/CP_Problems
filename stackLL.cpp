#include<bits/stdc++.h>
using namespace std;
class node
{
   int data;
   node *next;
   node(int val)
   {
       data=val;
       next =NULL;
   }
   friend class Stac;
};
class Stac
{
   node *top;
   node *head;
   int count;
   public:
   Stac()
   {
       top=NULL;
       count=0;
       head=NULL;
   }
   void push(int val)
   {
       node *p=new node(val);
       if(top==NULL)
       {
         top=p; 
         head=p;
       }
       else
       {
           top->next=p;
           top=p;
       }
       
   }
   void pop()
   {
       node *pp=head;
       node *q=head;
       while(pp->next!=NULL)
       {
           q=pp;
           pp=pp->next;
       }
        delete top;
        top=q;
        top->next=NULL;
   }
   void display()
   {
       while(head!=NULL)
       {
           cout<<head->data<<" ";
           head=head->next;
       }
   }
};
int main()
{
    Stac obj;
    obj.push(10);
    obj.push(6);
    obj.push(9);
    obj.pop();
    obj.pop();
    obj.display();
}