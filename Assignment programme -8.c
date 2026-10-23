#include<stdio.h>
void main()
{
 float weight,height,bmi;
 printf("Enter weight in kg :");
 scanf("%f",&weight);
 printf("Enter height in metres:");
 scanf("%f",&height);
 if (weight<=0||height<=0)
  {
    printf("Invalid input");
  }
 bmi = weight/(height*height);
 printf("BMI=%.2f",bmi); 
 if (bmi<18.5)
    printf("Under weight");
 else if (bmi<25)   
    printf("Normal");
 else if (bmi<30)
    printf("Over weight");
 else 
    printf("Obese");   
}