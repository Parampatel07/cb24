// Write a programe to findout power and exponent of given number
#include <stdio.h>
void main()
{
     int base = 0;
     int power = 0;
     int answer = 0;
     int count = 0;
     printf("Enter value of base ");
     scanf("%d", &base);
     printf("Enter value of power ");
     scanf("%d", &power);

     if (power == 1)
     {
          printf("%d ", base);
     }
     else if (power <= 0 || base <= 0)
     {
          printf("Number cannot be negative ");
     }
     else
     {
          answer = base * base; // 4
          count = 2;
          do
          {
               answer = answer * base;
               count++;
          } while (count < power);
          printf("%d ", answer);
     }
}