// Write a programe to print following pattern
// 1 8 27 64 .... 10000
#include <stdio.h>
void main()
{
     int number = 1;
     int answer = 0;
     
     while ( answer < 9261 )
     {
          answer = number * number * number;
          printf("%d ", answer);
          number = number + 1;
     }
     // answer = number * number * number ;
     // printf("%d ",answer);
     // number = number + 1 ;
     // answer = number * number * number ;
     // printf("%d ",answer);
     // number = number + 1;
     // answer = number * number * number ;
     // printf("%d ",answer);
}