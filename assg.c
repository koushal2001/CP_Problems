// #include<stdio.h>
// #include<conio.h>

// int main()
// {
//     unsigned int binary1,binary2;
//     int sum[8];
//     int i = 0, remainder = 0;
//     printf("Enter first binary no:::");
//      scanf("%ud",&binary1);
//   printf("Enter second binary no:::");
//     scanf("%ud",&binary2);
//        while (binary1 != 0 || binary2 != 0)
//     {
//         sum[i++] =(binary1 % 10 + binary2 % 10 + remainder) % 2;
//         remainder =(binary1 % 10 + binary2 % 10 + remainder) / 2;
//         binary1 = binary1 / 10;
//         binary2 = binary2 / 10;
//     }
//     if (remainder != 0)
//         sum[i++] = remainder;
//     --i;
   
//     int s[8]={};
//      int count=0;
//     printf("Sum of two binary numbers: ");
//     while (i >= 0)
//     {
//         s[i]=sum[i--];
//         count++;
//     }
// //    int diff=8-count;
// //     for(int i=0;i<diff;i++)
// //      printf("0");
//     for(int i=0;i<count;i++)
//      printf("%d",s[i]); 
        
// }


#include<stdio.h>

int main(){

    long int binary1,binary2;
    int i=0,remainder = 0,sum[20];

    printf("Enter any first binary number: ");
    scanf("%ld",&binary1);
    printf("Enter any second binary number: ");
    scanf("%ld",&binary2);

    while(binary1!=0||binary2!=0){
         sum[i++] =  (binary1 %10 + binary2 %10 + remainder ) % 2;
         remainder = (binary1 %10 + binary2 %10 + remainder ) / 2;
         binary1 = binary1/10;
         binary2 = binary2/10;
    }

    if(remainder!=0)
         sum[i++] = remainder;

    --i;
    printf("Sum of two binary numbers: ");
    while(i>=0)
         printf("%d",sum[i--]);

   return 0;
}