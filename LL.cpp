#include<bits/stdc++.h>
using namespace std;
#define ll long long
class node{
public:    
int item;
node *next;
node(int data)
{
    item=data;
    next=NULL;
}
};
class Linkedlist{
  private:  
  node *head;
  node *tail;
  int coun;
  public:
  Linkedlist()
  {
      head=NULL;
      tail=NULL;
      coun=0;
  }
  void insertend(int data)
  {
      node *n=new node(data);
      if(head==NULL)
      {
         head=n;
         tail=n;
      }
      else
      {
      
      tail->next=n;
      tail=n;
      }
      coun++;
  }
  void insertbeg(int data)
  {
      node *n=new node(data);
      if(head==NULL)
      {
          head=n;
          tail=n;
      }
      else
      {
          n->next=head;
          head=n;
      }
     coun++; 
  }
  void insertpos(int data,int pos)
  {
      node *ptr=head;
      node *p=new node(data);
      int count=1;
      if(pos==0)
      {
          p->next=head;
          head=p;
      }
      else if(pos>coun)
      {
          tail->next=p;
          tail=p;
      }
      else
      {
      if(head==NULL)
      {
          head=p;
          tail=p;
      }
      else
      {
          while(count<pos && ptr!=NULL)
          {
             ptr=ptr->next;
             count++;
          }
          p->next=ptr->next;
          ptr->next=p;
      }
      }
     coun++;
  }
  void delete_beg()
  {
      if(head==NULL)
      {
          cout<<"Nothing to delete";
      }
      else if (head==tail)
      {
          delete head;
          head=NULL;
          coun--;
      }
      else
      {
          node *tmp=head;
          head=head->next;
          delete tmp;
          coun--;
      }
      
  }
  void delete_end()
  {
      if(head==NULL)
      {
          cout<<"Nothing to delete";
      }
      else if(head==tail)
      {
          delete head;
          head=NULL;
          cout<<"Empty";
          coun--;
      }
      else
      {
          node *prev=head;
          node *cur=head;
          while(cur->next!=NULL)
          {
              prev=cur;
              cur=cur->next;
          }
          tail=prev;
          prev->next=NULL;
          delete cur;
          coun--;
      }  
  }
  void display()
  {
      node *tmp=head;
      while(tmp!=NULL)
      {
          cout<<tmp->item<<" ";
          tmp=tmp->next;
      }
      cout<<endl<<coun;
  }

  void del_at_position(int pos)
  {
      if(head==NULL)
      {
          cout<<"NOthing to delete";
      }
      else if(pos==0)
      {
          node *pp=head;
          head=NULL;
          cout<<"Empty";
          delete pp;
          coun--;
      }
      else if(pos>coun)
      {
            node *prev=head;
          node *cur=head;
          while(cur->next!=NULL)
          {
              prev=cur;
              cur=cur->next;
          }
          tail=prev;
          prev->next=NULL;
          delete cur;
          coun--;
      }
      else
      {
      int co=1;
      int cou=1;
      node *ptrr=head;
      node *abc=head;
      if(head!=NULL)
      {
          while(co<pos&& ptrr!=NULL)
          {
              ptrr=ptrr->next;
              co++;
          }
          while(cou<=pos&&abc!=NULL)
          {
              abc=abc->next;
              cou++;
          }
          ptrr->next=abc->next;
          delete abc;
          coun--;
      }
      }
  }
};
int main()
{
   Linkedlist obj;
   obj.insertend(10);
   obj.insertbeg(29);
   obj.insertend(20);
    obj.insertend(10);
    obj.insertbeg(29);
   obj.insertend(20);
   obj.insertpos(100,3);
   obj.insertpos(5000,1);
   obj.insertpos(5000,2);
   obj.insertpos(5000,3);
   obj.insertpos(5000,0);
    obj.insertpos(500,1000);
    obj.delete_beg();
    obj.delete_end();
   obj.del_at_position(1000);
   obj.display();
}