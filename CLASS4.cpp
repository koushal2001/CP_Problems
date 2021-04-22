//making fxn friend when fxn is inside the another  class
#include <iostream> 
using namespace std; 
class A;
class B
{
    int a,b;
    public:
    void getdata()
    {
        cin>>a;
        cin>>b;
    }
    friend void A::print1(B obj);

};
class A
{
    int x;
    public:
    void print1(B obj);
    {
      cout<<obj.a;
      cout<<obj.b;
      cout<<x;
    }
};
int main()
{
    B ob1;
    A ob2;
    ob1.getdata();
    print1(ob2);

}