#include<stdio.h>
void main()
{
     int age = 0 ;

     printf("Enter value of age ");
     scanf("%d",&age);

     if(age > 18)
     {
          printf("You are eligible for voting ");
     }
     else
     {
          printf("You are not eligible for voting ");
     }

     printf("\nGoodbyee...");
}