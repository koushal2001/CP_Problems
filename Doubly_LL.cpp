#include<bits/stdc++.h>
using namespace std;
class node
{
   int data;
   node *next;
   node *pre;
   node(int value)
   {
       data=value;
       next=NULL;
       pre=NULL;
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
    ~LL()
    {
        node *p=head;
        while(head!=NULL)
        {
           p=head->next;
           delete head;
           head=p;
        }
    }
    void insertbeg(int value)
    {
        node *n=new node(value);
        if(head==NULL)
        {
            head=n;
            tail=n;
        }
        else
        {
            head->pre=n;
            n->next=head;
            head=n;
        }
        count++;
    }
    void insertend(int value)
    { 
        node *n=new node(value);
          if(head==NULL)
          {
              head=n;
              tail=n;
          }
          else
          {
              n->pre=tail;
              tail->next=n;
              n->next=NULL;
              tail=n;
          }
         count++; 
    }
    void insert_pos(int value,int pos)
    {
        node *n=new node(value);
        if(head==NULL)
        {
            head=n;
            tail=n;
        }
        else if(pos==0)
        {
             n->next=head;
             n->pre=NULL;
            head->pre=n;
            head=n;
        }
        else if(pos>=count)
        {
             n->pre=tail;
              tail->next=n;
              n->next=NULL;
              tail=n;
        }
        else
        {
            int count=1;
            node *nn=head;
            while(count<pos && nn!=NULL)
            {
              nn=nn->next;
              count++;
            }
            n->next=nn->next;
            nn->next=n;
            n->pre=nn;
            nn->next->next->pre=n;
        }
        count++;
        
    }
    void delete_beg()
    {
        if(head==NULL)
        {
            cout<<"Underflow";
        }
        else
        {
            node *ptr=head;
            head=head->next;
            delete ptr;
            head->pre=NULL;
            count--;

        }
        
    }
    void delete_end()
    {
        if(head==NULL)
         cout<<"Underflow";
        else if(head==tail)
        {
           delete head;
           head=NULL;
           tail=NULL;
           cout<<"Empty";
           count--;
        } 
        else
        {
            node *tmp=head;
            node *se=head;
            while(tmp->next!=NULL)
            {
               se=tmp;
               tmp=tmp->next;
            }
            tail=se;
            tail->next=NULL;
            delete tmp;
            count--;
        }
        
    }
    void del_pos(int pos)
    {
        if(head==NULL)
        {
            cout<<"Underflow";
        }
        else if(pos==0&&head==tail)
        {
           delete head;
           head=NULL;
           tail=NULL;
           cout<<"Empty";
           count--;

        }
        else if(pos==0&&head!=tail)
        {
            node *p=head;
            head=head->next;
            head->pre=NULL;
            delete p;
            count--;
        }
        else if(pos>=count)
        {
             node *tmp=head;
            node *se=head;
            while(tmp->next!=NULL)
            {
               se=tmp;
               tmp=tmp->next;
            }
            tail=se;
            tail->next=NULL;
            delete tmp;
            count--;
        }
        else
        {
         node *cur=head;
         node*prev=head;
         
         for(int i=1;i<=pos;i++)
         {
            cur=cur->next;
            
         }
       //  cout<<cur->data<<" ";
         for(int i=1;i<pos;i++)
         {
             prev=prev->next;
         }
       //  cout<<prev->data<<endl;
          prev->next=cur->next;
         prev->next->next->pre=prev;
         delete cur;
         count--;

        }
        
    }
    void display()
    {
        node *ptr=head;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
        cout<<endl<<count<<endl;
        // node *a=tail;
        // while(a!=NULL)
        // {
        //   cout<<a->data<<" ";
        //   a=a->pre;
        // }
    }

};
int main()
{
  LL obj;
    obj.insertbeg(4);
  obj.insertbeg(6);
 obj.insertend(10);
  obj.insert_pos(100,99);
//  obj.delete_beg();
//  obj.delete_end();
 obj.del_pos(0);
  obj.display();
}