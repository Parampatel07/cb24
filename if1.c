// Write a programe to findout wether the user is eligible for voting or not
#include <stdio.h>
void main()
{
     int age = 0;

     printf("Enter value of age ");
     scanf("%d", &age);

     // check
     if (age >= 18)
     {
          printf("You are eligible for voting ");
     }

     printf("\nGoodbyee...");
}