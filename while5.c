// Write a programe to print following pattern
// 0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55 ... 10000
#include <stdio.h>
void main()
{
     int first = 0;
     int second = 1;
     int answer = 0;
     int count = 3;
     printf("%d ", first);
     printf("%d ", second);

     answer = second + 2;
     printf("%d ", answer);

     while(answer < 9870)
     {
          answer = answer + count;
          printf("%d ", answer);
          count = count + 1;
     }
     // answer = answer + count ;
     // printf("%d ",answer);
     // count = count + 1 ;
     // answer = answer + count ;
     // printf("%d ",answer);
     // count = count + 1 ;
     // answer = answer + count ;
     // printf("%d ",answer);
     // count = count + 1 ;
     // answer = answer + count ;
     // printf("%d ",answer);
}