// Write a programe to findout area of triangle
#include<stdio.h>
void main()
{
     float height = 0;
     float base = 0;
     float answer = 0;
     printf("Enter value of height ");
     scanf("%f", &height);

     printf("Enter value of base ");
     scanf("%f", &base);

     answer = height * base / 2;
     printf("The value of answer is %f ",answer);
}