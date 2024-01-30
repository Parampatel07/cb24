// Write a programe to print following pattern
// 1, 6, 15, 28, 45, 66, 91, 120, 153, 190, 231 .. 10000
// 0  5  9  13  17  21  25  29  33
#include <stdio.h>
void main()
{
     int first = 1;
     int temp = 5;
     int answer = 0;

     printf("%d ", first);
     answer = first + temp;
     
     for( temp = 5 ; answer <= 10000 ; answer = answer + temp)
     {
          printf("%d ", answer);
          temp = temp + 4;
          
     }
     // printf("%d ", answer);
     // temp = temp + 4;
     // answer = answer + temp;
     // printf("%d ", answer);
     // temp = temp + 4;
     // answer = answer + temp;
     // printf("%d ", answer);
}