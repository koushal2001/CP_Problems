#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct node
{
    int info;
    node *next;
};
class LL{
     public:
        
       void insert_begin(int value)
       {
          node* new1= new(node);
          new1->info = value;
          struct node *p,*start;
          if(start==NULL)
          {
            new1->next=NULL;
            start=new1;
          //  cout<<"1";
          }
          else
          {
              p=start;
              new1->next=p;
              start=new1;
           //   cout<<"2";
          }
          cout<<"element is inserted"<<endl;
       }
       void insert_end(int value)
       {
          node* new2= new(node);
          new2->info = value;
          struct node *p,*start;
              while(p!=NULL)
              {
                  p=p->next;
              }
              p->next=new2;
              new2->next=NULL;
              start=new2;
              cout<<"Element is inserted at last";
          
       }
       void specific_pos_insert(int value,int pos)
       {
           struct node *p,*start;
           node* new3=new(node);
           new3->info=value;
           int count=0;
           while(count<pos&&p!=NULL)
           {
             p=p->next;
             count++;
           }
           new3->next=p->next;
           p->next=new3;
           cout<<"element is inserted at specific pos";

       }
};
int main()
{
    LL obj;
   // obj.insert_begin(6);
    // obj.insert_end(11);
   // obj.insert_end(10);
   obj.specific_pos_insert(300,7);
}