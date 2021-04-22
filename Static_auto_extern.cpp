#include<bits/stdc++.h>
using namespace std;
class point
{
  int x;
  int y;
  static int count;
  public:
  void getdata()
  {
      cout<<"Enter elements";
      cin>>x>>y;
      count++;
  }
void displaycount()
  {
    cout<<"count="<<count;
  }
};
int point::count;
int main()
{
    point P;
 P.displaycount();
}