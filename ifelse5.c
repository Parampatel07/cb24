// Write a programe to findout wether the given number is pallindrome number or not (only 3 digit number )
#include <stdio.h>
void main()
{
     int number = 0;
     int first = 0;
     int last = 0;
     printf("Enter value of number ");
     scanf("%d", &number);

     first = number / 100;
     last = number % 10;

     printf("The value of first is %d \n", first);
     printf("THe value of last is %d ", last);

     if (first == last)
     {
          printf("\nThe number is pallindrome number ,number is %d ", number);
     }
     else
     {
          printf("\nThe number is not pallindrome number ,number is %d ", number);
     }

     printf("\nGoodbyee...");
}