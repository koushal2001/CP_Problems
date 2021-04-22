
//Addition
#include <stdio.h>
#include<conio.h>
int main()
{
int a,b;
printf("Enter first binary number:::");
scanf("%d",&a);
printf("Enter second binary number:::");
scanf("%d",&b);
int arr[8]={};
int arr1[8]={};
int k=7;
while(a>0)
{
    arr[k--]=a%10;
    a/=10;
}
k=7;
while(b>0)
{
arr1[k--]=b%10;
b/=10;
}
for(int i=0;i<8;i++)
 printf("%d",arr[i]);
printf(" - ");
for(int i=0;i<8;i++)
 printf("%d",arr1[i]);
int Cin=0,sum[7];
for(int i=7;i>=0;i--)
{
  sum[7-i]=arr[i]^arr1[i]^Cin;
  Cin= (~(arr[i])&(Cin||arr1[i]) ) & (arr1[i] & Cin);
    
}
printf(" = ");
for(int i=0;i<8;i++)
 printf("%d",sum[7-i]);

return 0;

}