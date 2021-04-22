#include<bits/stdc++.h>
#define ll long long
using namespace std;
class node
{
   ll data;
   node* next;
   node(ll val)
   {
       data=val;
       next=NULL;
   }
   friend class LL;
};
class LL
{
   node* head;
   node* tail;
   public:
   LL()
   {
       head=NULL;
       tail=NULL;
   }
    void insert_end(ll v)
   {
       node *ptr=new node(v);
       if(head==NULL)
       {
           head=ptr;
           tail=ptr;
       }
       else
       {
           tail->next=ptr;
           ptr->next=NULL;
           tail=ptr;
           tail->next=head;
       }
   }
   void display()
   {
      node* p=head;
      while(p!=tail)
      {
          cout<<p->data<<endl;
          p=p->next;

      } 
   }
};
int main()
{
  LL obj;
  obj.insert_end(1);
   obj.insert_end(2);
    obj.insert_end(3);
     obj.insert_end(4);
     obj.display();

}