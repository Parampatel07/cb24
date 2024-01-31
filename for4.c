// Write a progame to findout factorial of given number
// 32,00,000 -  -32,00,000 integer - 2byte
// long integer - 8byte
// long long integer - 20byte
#include <stdio.h>
void main()
{
     int number = 0;
     int count = 0;
     long long int answer = 0;
     printf("Enter value of number ");
     scanf("%d", &number);
     if (number == 1)
     {
          printf("The value of answer is 1");
     }
     else if (number > 0)
     {
          answer = number * (number - 1);
          for (count = 2; count < number; count++)
          {
               answer = answer * (number - count);
          }
          printf("The value of answer is %lld ", answer);
     }
     else
     {
          printf("Number cannot be negative ");
     }
}