// Write a programe to perform split any 2 digit
// number = 56 ;
// first = 5 , second = 6
#include <stdio.h>
void main()
{
     int number = 0;
     int first = 0;
     int second = 0;

     printf("Enter value of number any 2 digit number only ");
     scanf("%d", &number);

     first = number / 10;
     second = number % 10;

     printf("The value of first is %d and second is %d ", first, second);
}