
#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
ll precedence(char ch)
{
   if(ch == '+' || ch == '-')
   {
      return 1;             
   }
   else if(ch == '*' || ch == '/') 
   {
      return 2;        
   }
   else if(ch == '^') 
   {
      return 3;       
   }
   else 
   {
      return 0;
   }
}
string prefix1(string infix)
{
     reverse(infix.begin(), infix.end()); 
   stack<char> s;
 string prefix="";

 for(int i=0;i<infix.length();i++)
 {
 if((infix[i] >= 'a' && infix[i] <= 'z')
 ||(infix[i] >= 'A' && infix[i] <= 'Z'))
 {
 prefix+=infix[i];
 }
 else if(infix[i] == ')')
 {
 s.push(infix[i]);
 }
 else if(infix[i] == '(')
 {
 while((s.top()!=')') && (!s.empty()))
 {
 char temp=s.top();
 prefix+=temp;
 s.pop();
 }
 if(s.top()==')')
 {
 s.pop();
 }
 }
 else
 {
 if(s.empty())
 {
 s.push(infix[i]);
 }
 else
 {
 if(precedence(infix[i])>precedence(s.top()))
 {
 s.push(infix[i]);
 } 
 else if((precedence(infix[i])==precedence(s.top()))&&(infix[i]=='^'))
 {
 s.push(infix[i]);
 }
 else
 {
 while((!s.empty())&&( precedence(infix[i])<=precedence(s.top())))
 {
 prefix+=s.top();
  s.pop();
 }
 s.push(infix[i]);
 }
 }
 }
 }
 while(!s.empty())
 {
 prefix+=s.top();
 s.pop();
 }
 string q="";
 for(ll i=prefix.length();i>=0;i--)
 {
  q+=prefix[i];
 }
 return q;
}
 
int main()
{
    string s;
    cin>>s;
    cout<<prefix1(s);

}