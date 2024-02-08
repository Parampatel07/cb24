// Write a programe to peform subtraction of 2 variables using function
#include <stdio.h>

void getSubtraction(int a, int b)
{
     int answer = 0;
     answer = a - b;
     printf("The value of answer is %d ", answer);
}

void main()
{
     int number1 = 0;
     int number2 = 0;

     printf("Enter value of number 1 ");
     scanf("%d", &number1);
     printf("Enter value of number 2 ");
     scanf("%d", &number2);

     getSubtraction(number1,number2);
     
     getSubtraction(number2,number1);
}