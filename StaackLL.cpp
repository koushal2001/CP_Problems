#include<bits/stdc++.h>
using namespace std;
#define ll long long

class node
{
    ll data;
    node* next;
    node(ll val)
    {
       data=val;
       next=NULL;
    }
    friend class stackkLL;
};
class stackkLL
{
    public:
    node* top;
    node* head;
    stackkLL()
    {
        top=NULL;
        head=NULL;
    }
    bool isempty11()
    {
        if(top==NULL)
           return true;
        return false;   
    }
    void push11(ll val)
    {
        node* p=new node(val);
        if(isempty11())
        {
            top=p;
            head=p;
        }
         
        else
        {
           node*ptr=top;
           ptr->next=p;
           top=p;
        }
    
    }
    void pop11()
    {
        if(isempty11())
        {
            cout<<"empty"<<endl;
        }
        if(top==head)
        {
            delete top;
             top=NULL;
             head=NULL;
        }
        
        else
        {
            node* ptr=head;
             node* p=head;
            while(ptr->next!=NULL)
            {
                p=ptr;
                ptr=ptr->next;
            }
            top=p;
            top->next=NULL;
            delete ptr;
            


        }
    }
    void display()
    {
       
        while(top!=NULL)
        {
            cout<<top->data<<endl;
            pop11();
        }
           
            
       
    }

};

int main()
{
    stackkLL obj;
    obj.push11(10);
      obj.push11(1);
       obj.push11(100);
       obj.push11(20);
        obj.push11(10);
      obj.push11(1);
       obj.push11(100);
       obj.push11(20);
        obj.display();
}