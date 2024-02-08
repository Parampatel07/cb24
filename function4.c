// Write a programe to findout area of circle
#include <stdio.h>

float getPi()
{
     float pi = 3.141592;
     return pi;
}

void main()
{
     int radius = 0;
     int answer = 0;
     printf("Enter value of radius ");
     scanf("%d", &radius);

     answer = getPi() * (radius * radius);
     printf("The value of answer is %d ",answer);
}