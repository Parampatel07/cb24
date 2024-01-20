// Write a programe to findout greater number outof given 2 number
#include <stdio.h>
void main()
{
     int number1 = 0;
     int number2 = 0;

     printf("Enter value of number 1 ");
     scanf("%d", &number1);
     printf("Enter value of number 2 ");
     scanf("%d", &number2);

     if (number1 > number2)
     {
          printf("number 1 is greater ");
     }
     else if (number1 == number2)
     {
          printf("Both are same ");
     }
     else
     {
          printf("number 2 is greater ");
     }

     printf("\nGoodbyee..");
}