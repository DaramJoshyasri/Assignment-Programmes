#include<stdio.h>
void main()
{
 float amount,discount=0,delivery=0,total;
 int membership;
 printf("Enterprises order amount:");
 scanf("%d",&membership);
 if(amount>=500)
 {
   delivery=0;
   if(membership==1)
   discount=amount*0.10;
 }
 else
 {
   delivery=50;
 }
 total = amount-discount+delivery;
 printf("Final amount=Rs.%.2f",total);  
}