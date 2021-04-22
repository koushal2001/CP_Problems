#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll precedence(char ch)
{
   if(ch=='+'||ch=='-')
    return 1;
   else if(ch=='/'||ch=='*'||ch=='%')
    return 2;
   else if(ch=='^')
    return 3;
   else 
    return 0;   
}

ll func(ll b,ll a,char ch)
{
   if(ch=='+')
    return a+b;
   else if(ch=='-')
    return a-b;
   else if(ch=='/')
    return a/b;
   else if(ch=='%')
    return a%b;
   else if(ch=='*')
    return a*b;
   else if(ch=='^')
    return a^b;     
}
string InfixTopostfix(string infix)
{
   stack<char>s;
   string postfix="";
   for(ll i=0;i<infix.length();i++)
   {
      if((infix[i]>='a'&&infix[i]<='z')||(infix[i]>='A'&&infix[i]<='Z'))
       postfix+=infix[i];
      else if(infix[i]=='(')
       s.push(infix[i]); 
      else if(infix[i]==')')
      {
         while((s.top()!='(')&&(!s.empty()))
         {
            postfix+=s.top();
            s.pop();
         }
         if(s.top()=='(')
          s.pop();
      } 
      else
      {
         if(s.empty())
          s.push(infix[i]);
         else
         { 
         if((precedence(infix[i]))>(precedence(s.top()))) 
         {
            s.push(infix[i]);
         }
         else if((precedence(infix[i]))==(precedence(s.top()))&&(infix[i]=='^'))
         {
             s.push(infix[i]);
         }
         else
         {
            while((!s.empty())&&((precedence(s.top()))>=(precedence(infix[i]))))
            {
                postfix+=s.top();
                s.pop();
            }
            s.push(infix[i]);
         }
         }
      }
      
   }
   while(!s.empty())
   {
      postfix+=s.top();
      s.pop();

   }
   return postfix;
}

string infixToprefix(string infix)
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

ll postfix_evaluation(string s)
{
  stack<ll>P;
  for(ll i=0;i<s.length();i++)
  {
     if(isdigit(s[i]))
     {
        P.push(s[i]);
     }
     else
     {
        char ch=s[i];
        ll a=P.top();
        P.pop();
        ll b=P.top();
        P.pop();
        ll m=func(a,b,ch);
       // cout<<m<<endl;
        P.push(m);
     }
     
  }
  return P.top();
}
int main()
{
   string infix;
   cout<<"Enter infix expression:::";
   cin>>infix;
   cout<<"****************MENU**********************"<<endl;
   ll choice;
   cout<<"1) Infix to postfix\n2) Infix to prefix\n3)Postfix evaluation\n ";
   cin>>choice;
   if(choice==1)
   {
      cout<<"Postfix exp:::";
   cout<<InfixTopostfix(infix);
   }
   else if(choice==2)
   {
      cout<<"Prefix exp:::";
   cout<<infixToprefix(infix);
   }
   else if(choice==3)
   {
      cout<<"Postfix evaluation:::";
   cout<<postfix_evaluation(infix);
   }
   
}