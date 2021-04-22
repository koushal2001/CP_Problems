#include<bits/stdc++.h>
using namespace std;
class Distance
{
   double a,b;
   public:
   void input();
   friend class Calculate;
};
void Distance::input()
{
  cout<<"Enter distance in feets::";
  cin>>a;
  cout<<"Enter distance in inch::";
  cin>>b;

}
class Calculate
{
    Distance S;
    public:
    double add();
    double sub();
    void display();
};
double Calculate::add()
{
  return S.a+S.b;
}
double Calculate::sub()
{
  return S.a-S.b;
}
void Calculate::display()
{
    S.input();
    cout<<"Distance in feets is::"<<S.a<<endl;
    cout<<"Distance in inch is::"<<S.b<<endl;
    cout<<"Addition will be="<<add()<<endl;
    cout<<"Subtraction will be="<<sub()<<endl;

}  
int main()
{
    Calculate t1;
    t1.display();
    
}