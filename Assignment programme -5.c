#include<stdio.h>
void main()
{
 int age,score;
 float income;
 printf("Enterprises age,monthly income and credit score:");
 scanf("%d%f%d",&age,&income,&score);
 if(age<21||age>60)
   printf("Loan rejected:age is not in 21 to 60");
 else if (income<25000)
   printf("Loan rejected:income is below Rs.25000");  
 else if(score<700)
   printf("Loan rejected:credit score is below 700");
 else
   printf("Loan approved");
}