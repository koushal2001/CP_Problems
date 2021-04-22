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
       }
   }
    void insert_beg(ll v)
   {
       node *ptr=new node(v);
       if(head==NULL)
       {
           head=ptr;
           tail=ptr;
       }
       else
       {
           ptr->next=head;
           head=ptr;
       }
   }
   void insert_curr(ll v,ll loc)
   {
         node *ptr=new node(v);
         node* a=head;
         ll count=0;
         while(count<loc-1&&a!=NULL)
         {
             count++;
             a=a->next;

         }
        if(head==NULL)
        {
              head=ptr;
              tail=ptr;
        }
        else if(loc==0)
        {
            ptr->next=head;
            head=ptr;
        }
        else
        {
             ptr->next=a->next;
             a->next=ptr;
        }
   }
   void insert_sorted(ll v)
   {
        node* a=head;
        node* b=head;
        node* ptr=new node(v);
        while(a->data<v)
        {
            b=a;
            a=a->next;
        }
        ptr->next=b->next;
        b->next=ptr;
   }
   void del_beg()
   {
       if(head==NULL)
        cout<<"Underflow"<<endl;
       else
       {
        node* ppp=head;
        head=head->next;
        delete ppp; 
       }
   }
   void del_end()
   {
        if(head==NULL)
        cout<<"Underflow"<<endl;
       else
       {
           node* p=head;
           node* pq=head;
           while(p->next!=NULL)
           {
               pq=p;
               p=p->next;
           }
           tail=pq;
           tail->next=NULL;
           delete p;

       }
   }
   void del_curr(ll pos)
   {
       node* p=head;
        node* q;
      ll count=0;
      while(count<pos-1&&p!=NULL)
      {
          count++;
          p=p->next;
      }
      q=p->next;
      p->next=q->next;
      delete q;
   }
   void display()
   {
       node* p=head;
       while(p!=NULL)
       {
           cout<<p->data<<endl;
           p=p->next;
       }
   }
};
int main()
{
   LL obj;
//    obj.insert_end(66);obj.insert_end(60);
//    obj.insert_beg(88);
//    obj.insert_curr(77,1);
//     obj.insert_curr(70,0);
//     obj.insert_curr(0,5);
obj.insert_end(10);
obj.insert_end(15);
obj.insert_end(17);
obj.insert_end(20);
obj.insert_sorted(16);
obj.del_beg();
obj.del_end();
obj.del_curr(2);
obj.display();
}