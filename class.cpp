#include<bits/stdc++.h>
using namespace std;
class Student
{
private:
string name;
float total;
int roll;
int marks[5];
int sum;
public:
void input();
void display();
friend class Teacher;
};
void Student :: input()
{
  cout<<"Enter name::\n";
  cin>>name;
  cout<<"Enter rollno::\n";
  cin>>roll;
  for(int i=0;i<5;i++)
  {
      cout<<"Enter marks of student "<<i+1<<"\n";
      cin>>marks[i];
  }
}
void Student :: display()
{
  cout<<name;
  cout<<roll;
  for(int i=0;i<5;i++)
  {
      cout<<marks[i];
  }
}
class Teacher
{
    Student S[10];
    public:
    void calculate();
    void detail();

};
void Teacher::calculate()
{
    Student S1;
    for(int j=0;j<10;j++)
    {
       S[j].sum=0;
       for (int i=0;i<5;i++)
      {
       S[j].sum+=S[j].marks[i];
      } 
      S1.display();
    }
}
void Teacher :: detail()
{
    for(int i=0;i<10;i++)
      S[i].input();
}
int main()
{
   Teacher t1;
   
   t1.detail();
   t1.calculate();
  

}