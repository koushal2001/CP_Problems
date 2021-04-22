//making fxn friend when fxn is outside the class
#include <iostream> 
using namespace std; 
class B;   //forward decleration it is used when class is defined after and you want to pass the class before decleration
class A
{
    int x;
    public:
    void getdata()
    {
        cin>>x;
    }
    friend void max(A,B);
};
class B
{
    int y;
    public:
    void getdata()
    {
        cin>>y;
    }
    friend void max(A,B);

};
void max(A obj1,B obj2)
{
   if(obj1.x>obj2.y)
   {
       cout<<"x is greater";
   }
   else
   {
       cout<<"y is greater";
   }
   
}
int main()
{
    B a;
    A b;
    a.getdata();
    b.getdata();
    max(b,a);
}