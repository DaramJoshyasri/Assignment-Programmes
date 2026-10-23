#include<stdio.h>
void main()
{
 int a;
 printf("Enterprises a number:");
 scanf("%d",&a);
 if (a>0)
   printf("Positive number");
 else if (a<0)  
   printf("Negative number");
 else
   printf("Zero");
}