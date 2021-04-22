#include<bits/stdc++.h>
using namespace std;
class Time
{
    int hrs,mins;
    public:
    void gettime();
    void display();
    void add(Time,Time);
};
void Time::gettime()
{
    cout<<"Enter hours::";
    cin>>hrs;
    cout<<"Enter minutes::";
    cin>>mins;
}
void Time::add(Time t1,Time t2)
{
  if(t1.mins+t2.mins>60)
  {
      hrs=(t1.hrs+t2.hrs)+(t1.mins+t2.mins)/60;
      mins=(t1.mins+t2.mins)%60;
  }
  
  
}
void Time::display()
{
    cout<<hrs<<endl<<mins;
}
int main()
{
    Time t,p,q;
    t.gettime();
    p.gettime();
    q.add(t,p);
    q.display();
}