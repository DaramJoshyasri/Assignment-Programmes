#include<stdio.h>
void main()
{
 int id,password;
 printf("\nEnterprises user id :");
 scanf("%d",&id);
 if (id !=101)
    printf("\nUser not found");
 else
  {
    printf("\nEnter password:");
    scanf("%d",&password);
    if(password==4321)
      printf("\nLogin successful");
    else
      printf("\nIncorrect password");
  }     
}