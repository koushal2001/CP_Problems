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
        count=0;
        head=NULL;
        tail=NULL;
    }
    void insert_begin(int val)
    {
        node *p=new node(val);
        if(head==NULL)
        {
           head=p;
           tail=p;
        }
        else
        {
            p->next=head;
            head=p;
        }
        count++;
    }
    void insert_end(int val)
    {
        node *p=new node(val);
        if(head==NULL)
        {
            head=p;
            tail=p;
        }
        else
        {
            tail->next=p;
            tail=p;
        }
        count++;
    }
    void insert_pos(int val,int pos)
    {
        node *p=new node(val);
        if(head==NULL)
        {
           head=p;
           tail=p;
        }
        else if(pos>=count)
        {
           tail->next=p;
           tail=p;
        }
        else if(pos==0)
        {
            p->next=head;
            head=p;
        }
        else
        {
            int sum=1;
            node *pp;
            while(sum<pos&&pp!=NULL)
            {
              pp=pp->next;
              sum++;
            }
            p->next=pp->next;
            pp->next=p;
        }
       count++; 
    }
    void deletebeg()
    {
       if(head==NULL)
        cout<<"Underflow";
        else if(head==tail)
        {
            node *ptr=head;
            delete ptr;
            head=NULL;
            count--;
        }
       else
       {
          node *ptr=head;
          head=head->next;
          delete ptr;
          count--;
       } 
    }
    void deleteend()
    {
     if(head==NULL)
     {
         cout<<"UNDERFLOW";
     }
     else if(head==tail)
     {
          node *ptr=head;
            delete ptr;
            head=NULL;
            count--;
     }
     else
     {
         node *ppp=head;
         node *pttr;
         while(ppp->next!=NULL)
         {
             pttr=ppp;
             ppp=ppp->next;
         }
         tail=pttr;
         pttr->next=NULL;
         delete ppp;
         count--;
     }
     
    }
    void deletepos(int pos)
    {
         if(head==NULL)
     {
         cout<<"UNDERFLOW";
     }
     else if(pos==0 && head!=tail)
     {
          node *ptr=head;
          head=ptr->next;
            delete ptr;
            count--;
     }
     else if(pos==0 && head==tail)
     {
         delete head;
         head=NULL;
         tail=NULL;
         cout<<"Empty";
         count--;
     }
     else if(pos>count)
     {
         node *ppp=head;
         node *pppp=head;
         while(ppp->next!=NULL)
         {
             ppp=ppp->next;
         }
         while(pppp!=NULL)
         {
             pppp=pppp->next;
         }
         tail=ppp;
         delete pppp;
         count--;
     }
     else
     {
         node *cur;
         node*pre;
         int co=1;
         int tmp=1;
         while(co<pos&&pre!=NULL)
         {
            pre=pre->next;
            co++;
         }
         while(tmp<=pos&&cur!=NULL)
         {
             cur=cur->next;
             tmp++;
         }
         pre->next=cur->next;
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
        cout<<endl<<count;
    }
    ~LL()
    {
        node *np;
        while(head!=NULL)
        {
           np=head->next;
           delete head;
           head=np;

        }
    }
};
int main()
{
  LL obj;
  obj.insert_begin(100);
  obj.insert_end(10);
  obj.insert_pos(20,100);
  obj.deletebeg();
  obj.deleteend();
  obj.deletepos(3);
  obj.display();
}