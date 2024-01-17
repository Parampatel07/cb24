// Write a programe to peform swap
#include <stdio.h>
void main()
{
     int number1 = 20;
     int number2 = 50;
     int number3 = 0;

     number3 = number1;
     number1 = number2;
     number2 = number3;

     printf("The value of number 1 is %d and number 2 is %d", number1, number2);
}