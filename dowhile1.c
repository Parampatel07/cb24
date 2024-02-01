// Write a programe to print square's of first 50 numbers
#include <stdio.h>
void main()
{
     int number = 1;
     int answer = 0;

     do
     {
          answer = number * number;
          printf("%d ", answer);
          number++;
     }while( number <= 50 );

     // answer = number * number;
     // printf("%d ", answer);
     // number++;
     // answer = number * number;
     // printf("%d ", answer);
     // number++;
     // answer = number * number;
     // printf("%d ", answer);
}